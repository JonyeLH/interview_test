/*
�����
���������ַ������Ƚ�ÿ���ַ��Ƿ���ȣ������÷�20�������10�֣�������Ϊ0�������¼����۷֣��������ڸ��֣�

���룺�����ַ�������ȫ��WSAD��ɣ���֤�����ַ���������ͬ���ַ�������<=2000
WASDWWSAD
WASSWWAAD
�����
120
*/

//ֻ����27%����
#include <iostream>
#include <string>
using namespace std;
int main() {
	string target, patter;
	cin >> target >> patter;
	//�ж��Ӵ��ĳ����Ƿ���ԭ���Ƿ����
	int sum = 0;
	for (int i = 0; i < target.size(); i++) {
		if (target[i] == patter[i])
			sum += 20;
		else {
			if (sum <= 0) {
				sum = 0;
				continue;
			}
			sum -= 10;
		}
	}
	cout << sum << endl;
	return 0;
}