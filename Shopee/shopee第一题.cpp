////shopee��һ�⣺ת���ַ������飬
////����һ���ַ������飬����ַ�����ȥ�����������ַ����������ո��������һ���ַ�����Ǵ�дת���Сд
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
//		res[0] = res[0] - 'A' + 'a';	//��дתСд
//		res[0] = res[0] + 32;
//
//		// || res[0] >= 'a' && res[0] <= 'z'	//Сдת��д����
//		//res[0] = res[0] - 32;	//Сдת�ɴ�д
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
