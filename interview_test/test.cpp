////#include <iostream>
////using namespace std;
////
//////struct s {
//////	int i; 
//////	char c;
//////}*s1=0;
////
////
////
//////
//////void swap(int *a, int*b) {
//////int *t;
//////t = a;
//////a = b; 
//////b = t;
//////}
////
////
////
////
//////int main(){
//////
//////	s1 += 8;
//////	//s1++;
//////
//////	//s1 = s1 + 1 + 3;
//////
//////	//s1 = 8;
//////	cout << s1;
//////
//////	//int x = 1, y = 2;
//////	//int*p = &x, *q = &y;
//////	//swap(p, q);
//////	//printf("%d %d\n", *p, *q);
//////
//////	system("pause");
//////	return 0;
//////
//////}
////
//////
//////int sum(int a)
//////{
//////	int c = 0;
//////	static int b = 3;
//////	c += 1;
//////	b += 2;
//////	return (a + b + c);
//////}
////
////
//////void main() {
//////	int l;
//////	int a = 2;
//////	for (l = 0; l < 5; l++) {
//////		printf("%d,", sum(a));
//////	}
//////	system("pause");
//////}
////
////
////
////void Func(char str[100]) {
////	cout<<sizeof(str);
////	system("pause");
////}
////
////
////
////
////int main() {
////
////	char str[100] ;
////	Func(&str[100]);
////
////	void *p = malloc(100);
////	cout << sizeof(p);
////	system("pause");
////}
////
////
////
//
//
////#include <iostream>
////using namespace std;
//
////class A {
////
////public:
////	A() {
////		
////	}
////	const int B = 2;
////	void fun() {
////		cout << B << endl;
////		//return B;
////	}
////};
//
////int main() {
////	A a;
////	a.fun();
////
////	system("pause");
////	return 0;
////}
////#include <iostream>
////using namespace std;
////
////class cstu
////{
////
////private:
////	//static int a;
////
////public:
////	const int A=21;
////	//const int A;		//const 变量必须初始化
////	int d ;				//普通变量那都可以初始化，在C++11之后的版本是允许初始化的
////	void FUN() {
////		//A = 13;	//const 变量未初始化，在这初始化报错
////		d = 13;	//普通变量随便初始化
////	}
////
////	static int a;		//静态数据成员不能在类内初始化，可以在类内声明
////
////	static const int B = 22;	//在C++11之前的版本（C++98/C++03）只有 静态常量整型/字符char 数据成员才能在类中初始化
////	static const char b = 'a';	
////	//static const double d = 12.11;	//这里报错，静态常量float/double变量不能初始化
////
////
////	static void fun()	//静态成员函数的使用
////	{
////		
////		//d = 10;		//这里报错,静态函数成员不能引用非静态数据成员，只能使用静态的成员函数
////		//cstu::d = 10;
////		cout << "i am static" << endl;
////		a = 20;
////		cout << a << endl;
////	}
////
////	static void show( int a)	
////	{
////		cout << "i am static" << endl;
////		a = 30;
////		cout << a << endl;
////
////	}
////
////	cstu()//:a(2)		//这里是无法给静态成员进行初始化的
////	{
////		a = 12;			//重新给a进行赋值   假如这里没有赋值，那么在输出a的值就会将静态成员函数的a的值输出
////	}
////};
////
////int cstu::a = 13;		//静态数据成员在类外初始化，而且不必加上关键字static
////
////
////int main()
////{
////	// 这里可以使用类名作用域来调用静态成员函数和静态函数，说明静态成员函数和静态函数是在类创建的时候申请空间的
////	cout << cstu::a << endl;	//输出为13，静态数据成员的初始化
////	cstu::fun();	//fun函数覆盖为20
////
////	//这里也可以使用生成对象的方式来调用静态成员和静态函数
////	cstu stu;
////	cout << stu.a << endl;	//构造函数重新赋值为12
////	stu.fun();	//fun函数覆盖为20
////
////	//静态函数成员还可以传入静态数据成员
////	stu.show(stu.a);	//show函数覆盖为30
////
////
////	system("pause");
////	return 0;
////}
//
//
//
//	//int Func(int x);   /*声明一个函数*/
//	//int(*p) (int x);  /*定义一个函数指针*/
//	//p = Func;          /*将Func函数的首地址赋给指针变量p*/
//
//
//////shopee第一题：转换字符串数组，输入一组字符串数组，输出字符串中去除所有特殊字符，不保留空格，且如果第一个字符如果是大写转变成小写
////#include <iostream>
////#include <string>
////#include <vector>
////#include <algorithm>
////
////using namespace std;
////
////int main() {
////	string s;
////	getline(cin,s);		//string字符串数组的输入方式
////	vector<char> res;
////	if (s.size() == 0)	return 0;
////	for (int i = 0; i < s.size(); i++) {
////		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ) {
////			res.push_back(s[i]);
////		}
////		else if (s[i] >= '1' && s[i] <= '9' ) {
////			res.push_back(s[i]);
////		}
////		else if (s[i] == ' ') {
////			continue;
////		}
////		else {
////			continue;
////		}
////	}
////	if (res[0] >= 'A' && res[0] <= 'Z' ) {
////		res[0] = res[0] - 'A' + 'a';	//大写转小写
////		res[0] = res[0] + 32;
////		
////		// || res[0] >= 'a' && res[0] <= 'z'	//小写转大写条件
////		//res[0] = res[0] - 32;	//小写转成大写
////	}
////
////	for (int j = 0; j < res.size(); j++) {
////		cout << res[j];
////	}
////	
////	system("pause");
////	return 0;
////}
//
//
//
//
////#include <iostream>
////
////using namespace  std;
////
////struct xx {
////	long long _x1;
////	char _x2;
////	int _x3;
////	char _x4[2];
////	//static int _x5;
////};
//////int  xx::_x5;
////
////int main() {
////	cout<<sizeof(xx);
////	system("pause");
////	return 0;
////}
//
//
//
////#include <stdio.h>
////struct xx {
////	long long _x1;
////	char _x2;
////	int _x3;
////	char _x4[2];
////	//static int _x5;
////};
//////int  xx::_x5;
////
////
////int main() {
////	printf("%d", sizeof(xx));
////	
////	return 0;
////}
//
//
//
////#include <iostream>
////#include <string>
////using namespace std;
////int main() {
////
////	string s;
////	scanf_s("%s", s);
////	//cin >> s;
////	//cout << s << endl;
////	//printf("%s", s);
////	system("pause");
////	return 0;
////}
//
//
//
//
////
////#include <iostream>
////#include <vector>
////#include <unordered_map>
////using namespace std;
////
//////int main() {
//////
//////	char str[] = "glad to test something";
//////	char* p = str;
//////	p++;
//////	cout << p<<endl;
//////	int *p1 = reinterpret_cast<int*>(p);
//////	//cout << *p1 << endl;
//////	p1++;
//////	p = reinterpret_cast<char*>(p1);
//////	printf("result is %s\n", p);
//////
//////	system("pause");
//////	return 0;
//////}
////
////int main() {
////	//int n;
////	//cin >> n;
////	//vector<int> ans(n);
////	//unordered_map<int, int> map;
////	//for (int i = 0; i < n; i++) {
////	//	cin >> ans[i];
////	//	map[ans[i]]++;
////	//}
////	//int N = ans.size() >> 1;
////	//for (auto j : map) {
////	//	if (j.second > N)
////	//		cout<< j.first<<endl;
////	//}
////	int n;
////	cin >> n;
////	vector<int> ans(n);
////	for (int i = 0; i < n; i++) {
////		cin >> ans[i];
////	}
////	int res = 0;
////	for (int i = 0; i < 32; i++) {
////		int ones = 0;
////		for (int j : ans)
////			ones += (j >> i) & 1;
////		res += (ones > ans.size() / 2) << i;
////	}
////	cout << res << endl;
////
////
////	system("pause");
////	return -1;
////
////}
////
//#include <istream>
//
//using namespace std;
//void f(int*s, int(*p)[3]) {
//	*s = *(*(p + 1) + 1);
//}
//
//
//int main() {
<<<<<<< HEAD
//
//	//int a[] = { 1,2,3,4,5,6 };
//	//int *p;
//	//p = a + 1;
//	//printf("%d\n", *++p);
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int *p;
//	p = new int;
//	f(p, a);
//	//cout << *p << endl;
//	printf("%d\n", *p);
//
//	return 0;
//}
=======
//	printf("%d", sizeof(xx));
//	
//	return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//
//	string s;
//	scanf_s("%s", s);
//	//cin >> s;
//	//cout << s << endl;
//	//printf("%s", s);
//	system("pause");
//	return 0;
//}





//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
////int main() {
////
////	char str[] = "glad to test something";
////	char* p = str;
////	p++;
////	cout << p<<endl;
////	int *p1 = reinterpret_cast<int*>(p);
////	//cout << *p1 << endl;
////	p1++;
////	p = reinterpret_cast<char*>(p1);
////	printf("result is %s\n", p);
////
////	system("pause");
////	return 0;
////}
//
//int main() {
//	//int n;
//	//cin >> n;
//	//vector<int> ans(n);
//	//unordered_map<int, int> map;
//	//for (int i = 0; i < n; i++) {
//	//	cin >> ans[i];
//	//	map[ans[i]]++;
//	//}
//	//int N = ans.size() >> 1;
//	//for (auto j : map) {
//	//	if (j.second > N)
//	//		cout<< j.first<<endl;
//	//}
//	int n;
//	cin >> n;
//	vector<int> ans(n);
//	for (int i = 0; i < n; i++) {
//		cin >> ans[i];
//	}
//	int res = 0;
//	for (int i = 0; i < 32; i++) {
//		int ones = 0;
//		for (int j : ans)
//			ones += (j >> i) & 1;
//		res += (ones > ans.size() / 2) << i;
//	}
//	cout << res << endl;
//
//
//	system("pause");
//	return -1;
//
//}
//


//#include <iostream>
//int func(int a) {
//	static int s = 1;
//	s += a;
//	return s;
//}
//#define fun(a,b) a+b
//#include <cstdio>
//int main() {
//	//int i = 5, j = 1, m = 0;
//	//do {
//	//	m += --i + j++;	//先j++=2，再加上i（5），再--(6)，最后在+= --（5）	不是太清楚
//	//} while (i % 3);
//	//printf("%d %d %d\n", i--, ++j, m);
//
//
//
//	//int b = 2 << 3;
//	//int a = fun(2 << 3, 1) * 5;	//先3，1输入到fun函数=4，然后2<<4=32,最后32*2^4=512		最后的*5不清楚
//	//cout << a  <<" "<<b<< endl;
//
//
//
//	//unsigned char a, b,c,d;
//	//a = 7 ^ 3;	//异或，相同为0，不同为1	0111^0011=0100=4
//	//b= 2 & 3;	//与，同1为1，其他为0	0010&0011=0010=2
//	//c = ~2 & 3;	//搞不懂
//	//d = ~2;		//取反，char为一字节（8位） 2=0000 0010		~2=1111 1101=253
//	//printf("%d %d %d %d\n", a, b,c,d);
//
//
//
//	//int s = 1;
//	//printf("%d %d\n", s = func(s), s = func(s));		//合在一起输出：4 4
//	////分开之后输出
//	//printf("%d\n", s = func(s));	//2
//	//printf("%d\n", s = func(s));	//4
//
//
//
//	//int array[] = { 1,2,3,4,5 };
//	//int*ptr = array;	//ptr指向array的第一位 即1
//	//*(ptr++) += 123;	//ptr++指向array的第二位 即2	这里的+=123是干扰，对于指针没影响
//	//printf("%d,%d\n", *ptr, *(ptr + 1));	//第一个输出2，第二个输出后一位内容3
//
//
//
//
//	//char s[16];
//	//char ch[10];
//	//strncpy_s(s, "hello world", sizeof(s));	//strncpy不拷贝 '\n'	strcpy拷贝全部
//	//cout << s;	//hello world
//
//	//strcpy_s(ch, "hello world");		//ch[10]拷贝后溢出
//	//cout << ch;	//溢出
//
//
//
//	//怪题
//	//int y = 3, x = 3, z = 1;
//
//	//printf("%d %d\n" , (++x, y++), z + 2 );	//3 3
//
//	//int a = (++x, y++);
//	//printf("%d %d\n", (++x, y++), z + 2);		//4 3
//
//	////cout << (++x, y++)<<z+2;	//4 3
//
//
//	system("pause");
//	return 0;
//}
>>>>>>> 6714f55c94a58c881c34c1a27ba02c8d0555f4b3
