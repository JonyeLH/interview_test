//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	//cin >> s;	//ʹ��cin�����ַ������� " "���ո񣩾Ͳ����Ŷ���
//	getline(cin, s);	//ʹ��getline(cin,s)�����ַ��������ַ�����
//	//cout << s ;
//	int origin_Length = s.size()-1;
//	int black_count = 0;
//	for (int i = 0; i < origin_Length; i++) {
//		if (s[i] == ' ')	black_count++;
//	}
//
//	int new_Length = origin_Length + 2 * black_count;	//��������
//	s += string(black_count * 2 , ' ');	//string�ַ��������ݱ�������ʹ�� +=
//	//����ָ��
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
//	for (int j = 0; j <= new_Length; j++) {		//ע��߽�
//		cout << s[j];
//	}
//
//	system("pause");
//	return 0;
//}