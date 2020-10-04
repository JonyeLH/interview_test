////shopee第一题：转换字符串数组，
////输入一组字符串数组，输出字符串中去除所有特殊字符，不保留空格，且如果第一个字符如果是大写转变成小写
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	string s;
//	getline(cin, s);
//	vector<char> res;
//	if (s.size() == 0)	return 0;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
//			res.push_back(s[i]);
//		}
//		else if (s[i] >= '1' && s[i] <= '9') {
//			res.push_back(s[i]);
//		}
//		else if (s[i] == ' ') {
//			continue;
//		}
//		else {
//			continue;
//		}
//	}
//	if (res[0] >= 'A' && res[0] <= 'Z') {
//		res[0] = res[0] - 'A' + 'a';	//大写转小写
//		res[0] = res[0] + 32;
//
//		// || res[0] >= 'a' && res[0] <= 'z'	//小写转大写条件
//		//res[0] = res[0] - 32;	//小写转成大写
//	}
//
//	for (int j = 0; j < res.size(); j++) {
//		cout << res[j];
//	}
//
//	system("pause");
//	return 0;
//}
//
