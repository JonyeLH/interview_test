/*�ڶ��⣺
����һ����������������n���������ȫ��ͬ����С��n���������
��1������165	���156
��2������102	���0
��3������23		���0
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;



int main() {
	long long n;
	cin >> n;
	string s;
	s = to_string(n);
	if (s.size() == 0 || s.size() == 1) {
		cout << 0;
		system("pause");
		return 0;
	}

	//for (int i = 0; i < s.size(); i++) {
	//	cout << "s.size=" << s.size() << "\t" << i << "\t" << s[i] << endl;
	//}

	long long cnt = 0;
	int last = s.size()-1;
	for (int i = s.size() - 1; i > 0; i--) {
		if (s[i] > s[last]) {
			int temp = s[i];
			s[i] = s[last];
			s[last] = temp;
			break;
		}
		//else if (s[i] == s[last]) {
		//	last = i;
		//}

		else {
			cnt++;
			continue;
		}

		if (i == 1) {
			if (s[i] == '0') {
				cout << 0;
				system("pause");
				return 0;
			}
		}
	}

	if (cnt == s.size() - 1) {
		cout << 0;
		system("pause");
		return 0;
	}
	else {
		cout << s;
	}

	system("pause");
	return 0;


















	//for (int i = s.size() - 1; i > 0; i--) {
	//	for (int j = i - 1; j > 0; j--) {
	//		if (s[i] < s[j]) {
	//			int temp = s[j];
	//			s[j] = s[i];
	//			s[i] = temp;
	//			break;
	//		}
	//		else {
	//			cnt++;
	//			continue;
	//		}
	//	}
	//	if (i == 1) {
	//		if (s[i] == '0') {
	//			cout << 0;
	//			system("pause");
	//			return 0;
	//		}
	//	}
	//}
	//if (cnt == s.size() - 1) {
	//	cout << 0;
	//	system("pause");
	//	return 0;
	//}
	//else {
	//	cout << s;
	//}

	//system("pause");
	//return 0;
}


















//int main() {
//	long long n;
//	cin >> n;
//	string s;
//	s = to_string(n);
//	if (s.size() == 0 || s.size() == 1) {
//		cout << 0;
//		system("pause");
//		return 0;
//	}
//
//	//for (int i = 0; i < s.size(); i++) {
//	//	cout << "s.size=" << s.size() << "\t" << i << "\t" << s[i] << endl;
//	//}
//
//	long long cnt = 0;
//	for (int i = s.size()-1; i > 0; i--) {
//		if (s[i] < s[i - 1]) {
//			if (i == 1) {
//				if (s[i] == '0') {
//					cout << 0;
//					system("pause");
//					return 0;
//				}
//			}
//			int temp = s[i - 1];
//			s[i - 1] = s[i];
//			s[i] = temp;
//			break;
//		}
//		else {
//			cnt++;
//			continue;
//		}
//		
//	}
//	if (cnt == s.size()-1) {
//		cout << 0;
//		system("pause");
//		return 0;
//	}	
//	else {
//		cout << s;
//	}
//
//	system("pause");
//	return 0;
//}