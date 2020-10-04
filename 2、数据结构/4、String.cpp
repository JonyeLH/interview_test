/*
字符串匹配：BF、RK、BM、KMP

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

// //自己写的
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
	//跳出循环有两种可能，i=strlen(S)说明已经遍历完主串；j=strlen(T),说明模式串遍历完成，在主串中成功匹配
	if (j == pattern.size()) {
		cout<<(i - pattern.size())<<endl;
	}
	//运行到此，为i==strlen(S)的情况
	return 0;
}






///////////////////////////////////////////////  RK ////////////////////////////////////////////////////

int RabinKarp(string str, string pattern) {
	int m = str.size();	//主串长度
	int n = pattern.size();//模式串的长度
	int pattern_hashcode = hash_(pattern);	//计算模式串的hash值
	int str_hashcode = hash_(str.substr(0, n));	//计算主串当中第一个和模式串等长的子串hash值
	
	//用模式串的hash值和主串的局部hash值比较。
	//如果匹配，则进行精确比较；如果不匹配，计算主串中相邻子串的hash值。
	for (int i = 0; i < m - n + 1; i++) {
		if (pattern_hashcode == str_hashcode && compareString(i, str, pattern)) {
			cout<< i << endl;
		}
		if (i < m - n) {	////如果不是最后一轮，更新主串从i到i+n的hash值
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






///////////////////////////////////////////////  BM ////////////////////////////////////////////////////（有问题）
static int findCharacter(string pattern, char badCharacter, int index)////在模式串中，查找index下标之前的字符是否和坏字符匹配
{
	for (int i = index-1; i >= 0; i--) {
		if (pattern[i] == badCharacter)
			return i;
	}
	return -1;	//模式串不存在该字符，返回-1
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