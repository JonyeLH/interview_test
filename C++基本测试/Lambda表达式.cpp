///*
//lambda表达式 就是一个函数（匿名函数），也就是没有函数名的函数
//lambda表达式也叫闭包，闭就是封闭的意思，就是其他地方都不用他，包就是函数
//
//lambda表达式 其实就是一个函数对象，他内部创建了一个重载()操作符的类。定义如下：
//[capture](parameters) mutable ->return-type{statement}
//1.[capture]：捕捉列表。捕捉列表总是出现在Lambda函数的开始处。实际上，[]是Lambda引出符。编译器根据该引出符判断接下来的代码是否是Lambda函数。捕捉列表能够捕捉上下文中的变量以供Lambda函数使用;
//
//2.(parameters)：参数列表。与普通函数的参数列表一致。如果不需要参数传递，则可以连同括号“()”一起省略;
//
//3.mutable：mutable修饰符。默认情况下，Lambda函数总是一个const函数，mutable可以取消其常量性。在使用该修饰符时，参数列表不可省略（即使参数为空）;
//
//4.->return-type：返回类型。用追踪返回类型形式声明函数的返回类型。我们可以在不需要返回值的时候也可以连同符号”->”一起省略。此外，在返回类型明确的情况下，也可以省略该部分，让编译器对返回类型进行推导;
//
//5.{statement}：函数体。内容与普通函数一样，不过除了可以使用参数之外，还可以使用所有捕获的变量。
//
//
//与普通函数最大的区别是，除了可以使用参数以外，Lambda函数还可以通过捕获列表访问一些上下文中的数据。具体地，捕捉列表描述了上下文中哪些数据可以被Lambda使用，以及使用方式（以值传递的方式或引用传递的方式）。语法上，在“[]”包括起来的是捕捉列表，捕捉列表由多个捕捉项组成，并以逗号分隔。捕捉列表有以下几种形式：
//1.[var]表示值传递方式捕捉变量var；
//2.[=]表示值传递方式捕捉所有父作用域的变量（包括this）；
//3.[&var]表示引用传递捕捉变量var；
//4.[&]表示引用传递方式捕捉所有父作用域的变量（包括this）；
//5.[this]表示值传递方式捕捉当前的this指针。
//
//上面提到了一个父作用域，也就是包含Lambda函数的语句块，说通俗点就是包含Lambda的“{}”代码块。
//
//上面的捕捉列表还可以进行组合，例如：
//1.[=,&a,&b]表示以引用传递的方式捕捉变量a和b，以值传递方式捕捉其它所有变量;
//2.[&,a,this]表示以值传递的方式捕捉变量a和this，引用传递方式捕捉其它所有变量。
//
//不过值得注意的是，捕捉列表不允许变量重复传递。下面一些例子就是典型的重复，会导致编译时期的错误。例如：
//
//3.[=,a]这里已经以值传递方式捕捉了所有变量，但是重复捕捉a了，会报错的;
//4.[&,&this]这里&已经以引用传递方式捕捉了所有变量，再捕捉this也是一种重复
//*/
//
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
//class AddressBook
//{
//public:
//	std::vector<string> findMatchingAddresses(std::function<bool(const string&)> func)
//	{
//		std::vector<string> results;
//		for (auto itr = _addresses.begin(), end = _addresses.end(); itr != end; ++itr)
//		{
//			// 调用传递到findMatchingAddresses的函数并检测是否匹配规则
//			if (func(*itr))
//			{
//				results.push_back(*itr);
//			}
//		}
//		return results;
//	}
//	void SetAddress(const std::vector<std::string> &address)
//	{
//		_addresses = address;
//	}
//private:
//	std::vector<string> _addresses;
//};
//
//AddressBook global_address_book;
////查找匹配名字的地址
//vector<string> findAddressesFromName(const string &name)
//{
//	return global_address_book.findMatchingAddresses(
//		[&](const string& addr) { return addr.find(name) != string::npos; }
//	);
//}
////查找匹配长度的地址
//vector<string> findAddressesLen(const int &min_len)
//{
//	return global_address_book.findMatchingAddresses([&](const string& addr) { return addr.length() >= min_len; });
//}
//
//int main() {
//	[] {}();//最简单的一个lambda表达式，不含参数
//	
//	//含参数
//	[]() {}();
//
//	//{}函数体中输出打印
//	[] { cout << "Hello, World!"<<endl; }();
//
//	//声明lam匿名函数
//	auto lam = [] { cout << "Hello, World!" << endl; };
//	lam();	//调用这个匿名函数
//
//
//	//返回值类型
//	auto lam2 = []() -> int { cout << "Hello, World!" << endl; return 1; };
//	auto ret = lam2();
//	auto lam3 = []() -> string { cout << "Hello, World!" << endl; return "test"; };
//	auto ret1 = lam3();
//
//
//	//捕捉变量
//	int a = 1, b = 2, c = 3;
//	auto lam4 = [&, a]() { cout << a << b << c << endl; };//b，c以引用捕获，a以值捕获。
//	lam4();
//
//
//	//在STL中使用
//	vector<string> address1{ "111","222",",333",".org","wwwtest.org" };
//	std::for_each(address1.begin(), address1.end(), [](string& str) {cout << str << endl; });
//
//	
//	//打印类型
//	auto lam5 = []() {cout << "hi" << endl; };
//	cout << typeid(lam5).name() << endl;//输出 class <lambda_84cbc75ec05f81766286fdc5c4c4dc22>
//
//
//	//创建了一个接受lambda函数的函数，新的std::function是传递lambda函数的最好的方式，不管是传递参数还是返回值。
//	vector<string> address{ "china chengdu","china hunan","taiwan taibei","american alaisjia","riben dongjing" };
//	global_address_book.SetAddress(address);
//
//	auto ret3 = findAddressesFromName("china");
//	for_each(ret3.begin(), ret3.end(), [](string &i) {cout << i << ","; }); cout << endl;
//
//	auto ret4 = findAddressesLen(15);
//	for_each(ret4.begin(), ret4.end(), [](string &i) {cout << i << ","; }); cout << endl;
//
//
//
//	/*
//	在by_val_lambda中，j被视为一个常量，一旦初始化后不会再改变（可以认为之后只是一个跟父作用域中j同名的常量），
//	而在by_ref_lambda中，j仍然在使用父作用域中的值。所以，在使用Lambda函数的时候，如果需要捕捉的值成为Lambda函数的常量，
//	我们通常会使用按值传递的方式捕捉；相反的，如果需要捕捉的值成成为Lambda函数运行时的变量，则应该采用按引用方式进行捕捉。
//	*/
//	int j = 10;
//	auto by_val_lambda = [=] { return j + 1; };
//	auto by_ref_lambda = [&] { return j + 1; };
//	cout << "by_val_lambda: " << by_val_lambda() << endl;	//11
//	cout << "by_ref_lambda: " << by_ref_lambda() << endl;	//11
//
//	++j;
//	cout << "by_val_lambda: " << by_val_lambda() << endl;	//11
//	cout << "by_ref_lambda: " << by_ref_lambda() << endl;	//12
//
//
//
//	/*
//	这段代码主要是用来理解Lambda表达式中的mutable关键字的。默认情况下，Lambda函数总是一个const函数，
//	mutable可以取消其常量性。按照规定，一个const的成员函数是不能在函数体内修改非静态成员变量的值。
//
//	对于const的成员函数，修改非静态的成员变量，所以就出错了。
//	而对于引用的传递方式，并不会改变引用本身，而只会改变引用的值，因此就不会报错了。
//	*/
//	int val = 0;
//	// auto const_val_lambda = [=](){ val = 3; }; wrong!!!
//
//	auto mutable_val_lambda = [=]() mutable { val = 3; };
//	mutable_val_lambda();
//	cout << val << endl; // 0
//
//	auto const_ref_lambda = [&]() { val = 4; };
//	const_ref_lambda();
//	cout << val << endl; // 4
//
//	auto mutable_ref_lambda = [&]() mutable { val = 5; };
//	mutable_ref_lambda();
//	cout << val << endl; // 5
//
//
//	system("pause");
//	return 0;
//}