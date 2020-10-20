///*
//
//输入一组字符串"abc def fge"		将字符翻转
//输出为： "cba fed egf"
//
//*/
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	string s;
//	getline(cin, s);
//	for (int i = 0, j, k; i<s.size(); ++i) {
//		if (s[i] == ' ') {
//			cout << ' ';
//		}
//		else {
//			string temp;
//			for (k = i; k<s.size() && s[k] != ' '; ++k) {
//				temp += s[k];
//			}
//			i = k - 1;
//			reverse(temp.begin(), temp.end());
//			cout << temp;
//			temp.clear();
//		}
//	}
//	return 0;
//}
