///*
//断言函数assert()是一个宏,断言assert 是仅在Debug 版本起作用的宏，它用于检查"不应该"发生的情况。
//
//头文件assert.h
//#include "assert.h"
//void assert( int expression );
//
//assert 的作用是现计算表达式 expression ，!!!如果其值为假（即为0）!!!!，那么它先向 stderr 打印一条出错信息,然后通过调用 abort 来终止程序运行。
//
//使用 assert 的缺点是，频繁的调用会极大的影响程序的性能，增加额外的开销。
//
//在调试结束后，可以通过在包含 #include 的语句之前插入 #define NDEBUG 来禁用 assert 调用，示例代码如下：
//#include
//#define NDEBUG
//#include
//
//*/
//#include <iostream>
//#include <assert.h>
//
//#define MAX_BUFFER_SIZE 100
//
//#define Min_BUFFER_SIZE 0
//
////作用：在函数开始处检验传入参数的合法性
//int resetBufferSize(int nNewSize1,int nNewSize2)
//{
//	//功能:改变缓冲区大小, 
//	//参数:nNewSize 缓冲区新长度 
//	//返回值:缓冲区当前长度 
//	//说明:保持原信息内容不变 nNewSize<=0表示清除缓冲区 
//	assert(nNewSize1 >= Min_BUFFER_SIZE);
//	assert(nNewSize2 <= MAX_BUFFER_SIZE);
//
//	//注意：每个assert只检验一个条件, 因为同时检验多个条件时, 如果断言失败, 无法直观的判断是哪个条件失败
//
//	assert(nNewSize1 >= Min_BUFFER_SIZE && nNewSize2 <= MAX_BUFFER_SIZE);
//
//
//	//不能使用改变环境的语句,因为assert只在DEBUG个生效,如果这么做,会使用程序在真正运行时遇到问题
//	/*
//	错误: assert(i++ < 100)
//	这是因为如果出错，比如在执行之前i=100,那么这条语句就不会执行，那么i++这条命令就没有执行。
//
//	正确:
//	assert(i < 100)
//	i++; 
//	*/
//
//	return 0;
//}
//
//int main() {
//
//	int a = -1 , b = 101;
//	resetBufferSize(a,b);	//报错
//
//
//	return 0;
//}