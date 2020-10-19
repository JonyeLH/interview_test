///*
//
//substr(a,b) 截取字符串从位置a开始，b个字符，可用于字符串前后换序
//
//*/
//
//
//#include<iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	string s;
//	//cin >> s;
//	getline(cin, s);	//字符串数组的读入
//
//	int n;
//	cin >> n;
//
//
//	string ss;
//	cout << s.size()<<endl;
//	ss = s.substr(n, s.size() - 1) + s.substr(0, n);
//
//	cout << ss<<endl;
//
//	system("pause");
//	return 0;
//}