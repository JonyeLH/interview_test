//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//int main() {
//
//	//�ַ���ת���ͣ�
//
//	//����һ��
//	//char�ַ���ʹ��atoiתΪ����
//	char p[] = "123456";
//	long a = atoi(p);
//	cout << a << endl;
//
//	//��������
//	//string�ַ���ʹ��atoiתΪ����
//	string str = "13";
//	int d = atoi(str.c_str());	//����뽫stringת��const char *������Ϳ���ʹ��c_str()����
//	cout << d << endl;
//
//	//string�ַ���ʹ��stoiתΪ����
//	int t = stoi(str);
//	cout << t << endl;
//
//	//��������
//	//ʹ��ǿת����
//	//���ַ�char����ת����int���͵ķ������£�
//	char str_data = '5';	
//	int int_data = (int)(str_data - '0');	//�� '0' �ǽ� '5' ��Ӧ��ASSIC���ȥ '0' ����Ӧ��ASSIC�룬���ܵõ���Ӧ������
//	cout << int_data << endl;
//
//	//�����ģ�
//	//ʹ��stringstream
//	string s = "17";
//	stringstream ss;
//	ss << s;
//	int i;
//	ss >> i;
//	cout << i << endl; //���17
//
//
//
//	////�����壺ȱ���ļ���Ϣ���޷�����boost
//	////ʹ��boost���е�lexical_cast
//	////string s = "17";
//	////int i = boost::lexical_cast<int>(s);
//	////cout << i << endl; // 17
//
//
//
//
//
//
//	//����ת��Ϊ�ַ�����
//
//	//����һ��
//	//intת��Ϊchar
//	int number = 123456;
//	char str_[25];
//	//itoa��������˵��:������������ʾ���ƣ�10����10����
//	_itoa_s(number, str_, 10);
//	cout << str_ << endl;
//
//	//��������
//	//ʹ��ǿ��ת������
//	//intת�����ַ�char�������෴�ķ���
//	int data_int = 9;
//	char data_str = (char)(data_int + '0');
//	cout << data_str << endl;
//	//Ϊʲôһ����+,һ����-��
//	//��ʵ�ַ�����������ASCII��������,'0'��ascii��ֵΪ48,'5'��ascii��ֵΪ53
//
//
//	//��������
//	//ʹ��sprintf()������Ϊת��,��ָ�����ַ�����ʽ������
//	//�ڶ�������:��ʽ���ַ���
//	//%% ӡ���ٷֱȷ��ţ���ת����
//	//%c ����ת�ɶ�Ӧ�� ASCII ��Ԫ��
//	//%d ����ת��ʮ��λ��
//	//%f ����ȷ������ת�ɸ�������
//	//%o ����ת�ɰ˽�λ��
//	//%s ����ת���ַ�����
//	//%x ����ת��Сдʮ����λ��
//	//%X ����ת�ɴ�дʮ����λ��
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
