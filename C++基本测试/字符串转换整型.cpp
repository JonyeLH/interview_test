//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//int main() {
//
//	//字符串转整型：
//
//	//方法一：
//	//char字符串使用atoi转为整型
//	char p[] = "123456";
//	long a = atoi(p);
//	cout << a << endl;
//
//	//方法二：
//	//string字符串使用atoi转为整型
//	string str = "13";
//	int d = atoi(str.c_str());	//则必须将string转成const char *，这里就可以使用c_str()函数
//	cout << d << endl;
//
//	//string字符串使用stoi转为整型
//	int t = stoi(str);
//	cout << t << endl;
//
//	//方法三：
//	//使用强转方法
//	//将字符char类型转换成int整型的方法如下：
//	char str_data = '5';	
//	int int_data = (int)(str_data - '0');	//减 '0' 是将 '5' 对应的ASSIC码减去 '0' 所对应的ASSIC码，就能得到相应的整数
//	cout << int_data << endl;
//
//	//方法四：
//	//使用stringstream
//	string s = "17";
//	stringstream ss;
//	ss << s;
//	int i;
//	ss >> i;
//	cout << i << endl; //输出17
//
//
//
//	////方法五：缺少文件信息，无法读入boost
//	////使用boost库中的lexical_cast
//	////string s = "17";
//	////int i = boost::lexical_cast<int>(s);
//	////cout << i << endl; // 17
//
//
//
//
//
//
//	//整型转化为字符串型
//
//	//方法一：
//	//int转化为char
//	int number = 123456;
//	char str_[25];
//	//itoa函数参数说明:第三个参数表示进制，10代表10进制
//	_itoa_s(number, str_, 10);
//	cout << str_ << endl;
//
//	//方法二：
//	//使用强制转换方法
//	//int转换成字符char是利用相反的方向
//	int data_int = 9;
//	char data_str = (char)(data_int + '0');
//	cout << data_str << endl;
//	//为什么一个用+,一个用-呢
//	//其实字符的相加相减是ASCII的相加相减,'0'的ascii的值为48,'5'的ascii的值为53
//
//
//	//方法三：
//	//使用sprintf()函数作为转换,它指的是字符串格式化命令
//	//第二个参数:格式化字符串
//	//%% 印出百分比符号，不转换。
//	//%c 整数转成对应的 ASCII 字元。
//	//%d 整数转成十进位。
//	//%f 倍精确度数字转成浮点数。
//	//%o 整数转成八进位。
//	//%s 整数转成字符串。
//	//%x 整数转成小写十六进位。
//	//%X 整数转成大写十六进位。
//
//	int number2 = 987654;
//	char str2[25];
//	sprintf_s(str2, "%d", number2);
//	cout << str2 << endl;
//
//
//	system("pause");
//	return 0;
//}
