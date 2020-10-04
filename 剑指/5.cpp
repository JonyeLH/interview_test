//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	//cin >> s;	//使用cin读入字符，遇到 " "（空格）就不接着读入
//	getline(cin, s);	//使用getline(cin,s)读入字符，读到字符结束
//	//cout << s ;
//	int origin_Length = s.size()-1;
//	int black_count = 0;
//	for (int i = 0; i < origin_Length; i++) {
//		if (s[i] == ' ')	black_count++;
//	}
//
//	int new_Length = origin_Length + 2 * black_count;	//新增长度
//	s += string(black_count * 2 , ' ');	//string字符串的扩容必须连着使用 +=
//	//两个指针
//	int Index_origin = origin_Length;
//	int Index_new = new_Length;
//
//	while (Index_origin >= 0 && Index_new > Index_origin) {
//		if (s[Index_origin] == ' ') {
//			s[Index_new--] = '%';
//			s[Index_new--] = '0';
//			s[Index_new--] = '2';
//		}
//		else {
//			s[Index_new--] = s[Index_origin];
//		}
//		Index_origin--;
//	}
//	for (int j = 0; j <= new_Length; j++) {		//注意边界
//		cout << s[j];
//	}
//
//	system("pause");
//	return 0;
//}