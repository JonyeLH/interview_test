/*
�ַ���ƥ�䣺BF��RK��BM��KMP

*/



#include <iostream>
#include <string>

using namespace std;

///////////////////// BF /////////////////////////

int BF(string str, string pattern);


///////////////////// RK /////////////////////////
int RabinKarp(string str, string pattern);
int hash_(string str);
bool compareString(int i, string str, string pattern);
int nexthash(string str, int hash, int index, int n);



///////////////////// BM /////////////////////////

static int BoyerMoore(string str, string pattern);





///////////////////// KMP /////////////////////////







int main() {
	//string str = "qqqacdesadsdfer";
	//string pattern = "adsd";

	string
		str
		=

		"GTTATAGCTGGTAGCGGCGAA"
		;

	string
		pattern
		=

		"GTAGCGGCG"
		;

	////BF
	//BF(str, pattern);

	////RK
	//RabinKarp(str, pattern);

	//BM
	BoyerMoore(str, pattern);


	system("pause");
	return 0;
}


//////////////////////////////////////  BF  /////////////////////////////////////

// //�Լ�д��
//int Brute_Force(string str, string pattern) {
//	int m = str.size();
//	int n = pattern.size();
//	int i=0, j=0;
//	while( j < n){
//		while( i< m ){
//			if (pattern[j] == str[i]) {
//				i++;
//				j++;
//			}
//			else {
//				j = 0;
//			}
//		}
//	}
//}



int BF(string str, string pattern) {
	int i = 0, j = 0;
	while (i<str.size() && j<pattern.size()) {
		if (str[i] == pattern[j]) {
			i++;
			j++;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}
	//����ѭ�������ֿ��ܣ�i=strlen(S)˵���Ѿ�������������j=strlen(T),˵��ģʽ��������ɣ��������гɹ�ƥ��
	if (j == pattern.size()) {
		cout<<(i - pattern.size())<<endl;
	}
	//���е��ˣ�Ϊi==strlen(S)�����
	return 0;
}






///////////////////////////////////////////////  RK ////////////////////////////////////////////////////

int RabinKarp(string str, string pattern) {
	int m = str.size();	//��������
	int n = pattern.size();//ģʽ���ĳ���
	int pattern_hashcode = hash_(pattern);	//����ģʽ����hashֵ
	int str_hashcode = hash_(str.substr(0, n));	//�����������е�һ����ģʽ���ȳ����Ӵ�hashֵ
	
	//��ģʽ����hashֵ�������ľֲ�hashֵ�Ƚϡ�
	//���ƥ�䣬����о�ȷ�Ƚϣ������ƥ�䣬���������������Ӵ���hashֵ��
	for (int i = 0; i < m - n + 1; i++) {
		if (pattern_hashcode == str_hashcode && compareString(i, str, pattern)) {
			cout<< i << endl;
		}
		if (i < m - n) {	////����������һ�֣�����������i��i+n��hashֵ
			str_hashcode = nexthash(str, str_hashcode, i, n);
		}
	}
	return -1;
}

int hash_(string str) {
	int hashcode = 0;
	for (int i = 0; i <str.size(); i++) {
		hashcode += str[i] - 'a';
	}
	return hashcode;
}

bool compareString(int i, string str, string pattern) {
	string subStr = str.substr(i, pattern.size());
	return subStr == pattern;
}

int nexthash(string str, int hash, int index, int n) {
	hash -= str[index] - 'a';
	hash += str[index + n] - 'a';
	return hash;
}






///////////////////////////////////////////////  BM ////////////////////////////////////////////////////�������⣩
static int findCharacter(string pattern, char badCharacter, int index)////��ģʽ���У�����index�±�֮ǰ���ַ��Ƿ�ͻ��ַ�ƥ��
{
	for (int i = index-1; i >= 0; i--) {
		if (pattern[i] == badCharacter)
			return i;
	}
	return -1;	//ģʽ�������ڸ��ַ�������-1
}

static int BoyerMoore(string str, string pattern) {
	int strLength = str.size();
	int patternLength = pattern.size();
	int start = 0;
	while (start <= strLength - patternLength) {
		int i;
		for (i = patternLength - 1; i >= 0; i--) {
			if (str[i] != pattern[i])
				break;
		}
		if (i < 0) {
			cout << start << endl;
			return start;
		}
		int charIndex = findCharacter(pattern, str[start+i], i);
		int bcoffset = charIndex >= 0 ? i - charIndex : i + 1;
		start += bcoffset;
	}
	//cout << start << endl;
	return -1;
}