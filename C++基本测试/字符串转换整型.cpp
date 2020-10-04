/*
字符串转整型：
方法一：
	char p[] = "123456";
	long a = atoi(p);
	cout << a << endl;

方法二：
	//使用stringstream
	string s="17";
	stringstream ss;
	ss<<s;
	int i;
	ss>>i;
	cout<<i<<endl; //输出17

方法三：
	//使用boost库中的lexical_cast
	string s = "17";
	int i = boost::lexical_cast<int>(s);
	cout << i << endl; // 17




char转int
	//将字符char类型转换成int整型的方法如下：
	char str_data = '5';
	int int_data = (int)(str_data - '0');
	cout << int_data << endl;
	//同样的道理int转换成字符char是利用相反的方向
	int data_int = 9;
	char data_str = (char)(data_int + '0');
	cout << data_str << endl;
	//为什么一个用+,一个用-呢
	其实字符的相加相减是ASCII的相加相减,'0'的ascii的值为48,'5'的ascii的值为53





int转字符串
	//将int整型转化为字符串型
	int number = 123456;
	char str[25];
	itoa函数参数说明
    //第三个参数表示进制，10代表10进制
	itoa(number, str, 10);



	//还可以用sprintf()函数作为转换,它指的是字符串格式化命令
	//第二个参数:格式化字符串
	%% 印出百分比符号，不转换。
	%c 整数转成对应的 ASCII 字元。
	%d 整数转成十进位。
	%f 倍精确度数字转成浮点数。
	%o 整数转成八进位。
	%s 整数转成字符串。
	%x 整数转成小写十六进位。
	%X 整数转成大写十六进位。

	int number2 = 987654;
	char str2[25];

	sprintf(str2, "%d", number2);
	cout << str2 << endl;
*/