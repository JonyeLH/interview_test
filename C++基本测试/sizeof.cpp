//#include <iostream>
//using namespace std;
//
//class MyClass
//{
//public:
//
//	MyClass();
//	 ~MyClass();	//virtual
//
//	void show();
//	void show1() {
//		int c = 2;
//	}
//private:
//	//int a;
//	//在windows64位一般使用LLP64模型，该模型下long/unsigned long为4字节
//	long d;		//4
//	//unsigned long j;	//4
//
//	//static int f;	//静态成员，不占栈内存
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//}
//
//void MyClass::show() {
//	int b = 3;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	//对空类进行sizeof，值为1，不为0.因为类要留有空间实例化，在vs中实例占用1字节空间，如果有变量申明，则会覆盖了空类中的1内存
//	//调用构造函数和虚构函数只需知道函数地址即可，不与类型有关，编译器无需为此添加任何信息。对于普通函数也是一样，即使函数中声明了变量，也不占内存空间
//	//若在析构函数标记为虚函数，则需要占据一定的空间。因为虚构函数的调用会生成一个指针指向虚表，所以也就是对指针进行sizeof，32位系统指针占4位，64位占8位字节空间
//	//如果有静态数据成员，不占类内存。因为静态成员的内存实在静态存储内存中，而类中的成员是存储在栈内存中。
//
//	cout<< sizeof(MyClass);
//
//	system("pause");
//	return 0;
//}