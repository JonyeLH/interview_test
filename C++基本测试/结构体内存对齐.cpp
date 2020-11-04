/*
结构的成员变量是存放在栈内存中
64位机器中
8字节		long long / long	 		double				指针类型			char*(即指针变量)		unsigned long		uint64_t/int64_t
4字节		unsigned int /int			float				uint32_t/int32_t		long int
2字节		short						short int  		    uint16_t/int16_t
1字节		char						uint8_t/int8_t

32位机器中
8字节		long long 					double
4字节		unsigned int /int			float				long				指针类型		
2字节		short
1字节		char


对齐规则
一、在有#pragma pack宏的情况下

	有宏定义的情况下 结构体的自身宽度 就是宏上规定的数值大小  所有内存都按照这个宽度去布局

　　#pragma pack 参数只能是 '1', '2', '4', '8', or '16'
    
	#pragma pack指定的数值和结构(或联合)最大数据成员长度中，比较小的那个进行。

二、在没有#pragma pack宏的情况下

　没有宏定义的情况下  结构体的自身宽度由最大成员类型的大小决定  
 
 内对齐规则：
　
	1、每个成员的首地址是自身大小的整数倍，如果不是则需要向后移动若干字节（偏移量），直至地址是自身变量的长度整数倍
		各成员变量存放的起始地址相对于结构的起始地址的偏移量必须为该变量的类型所占用的字节数的倍数

	2、结构体的总大小，为其成员变量中所含最大类型的整数倍。


	空结构体大小为1
	静态成员不占栈内存，所以不计入计算


	比如：
	struct MyStruct
	{
	char dda;
	double dda1;
	int type
	}；

	（简单说明）
	struct MyStruct
	{
	char dda;//偏移量为0，满足对齐方式，dda占用1个字节；
	double dda1;//下一个可用的地址的偏移量为1，不是sizeof(double)=8的倍数，需要补足7个字节才能使偏移量变为8（满足对齐方式），因此VC自动填充7个字节，dda1存放在偏移量为8的地址上，它占用8个字节。
	int type；//下一个可用的地址的偏移量为16，是sizeof(int)=4的倍数，满足int的对齐方式，所以不需要VC自动填充，type存放在偏移量为16的地址上，它占用4个字节。
	}；
	所有成员变量都分配了空间，空间总的大小为1+7+8+4=20，不是结构的节边界数（即结构中占用最大空间的类型所占用的字节数sizeof(double)=8）的倍数，所以需要填充4个字节，以满足结构的大小为sizeof(double)=8的倍数。
	所以该结构总的大小为：sizeof(MyStruc)为1+7+8+4+4=24。其中总的有7+4=11个字节是VC自动填充的，没有放任何有意义的东西。
*/



#include <stdio.h>
struct xx {
	long long _x1;	//8=8
	char _x2;		//8+1=9
	int _x3;		//9+3（偏移量）+4=16
	char _x4[2];	//16+2*1=18	和数组的量有关
	static int _x5;	//静态数据存储在静态存储区，不占栈内存
};
int  xx::_x5;

int main() {
	printf("%d", sizeof(xx));		//18+6（偏移量，使得整个大小是最大数据类型的倍数）=24

	return 0;
}