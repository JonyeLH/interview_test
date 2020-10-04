/*
×Ö·û´®Æ¥Åä£ºBF¡¢RK¡¢BM¡¢KMP

*/



#include <iostream>
#include <string>

using namespace std;

///////////////////// BF /////////////////////////




///////////////////// RK /////////////////////////
int RabinKarp(string str, string pattern);
int hash_(string str);
bool compareString(int i, string str, string pattern);
int nexthash(string str, int hash, int index, int n);



///////////////////// BM /////////////////////////







///////////////////// KMP /////////////////////////

int main() {
	string str = "aacdesadsdfer";
	string pattern = "adsd";
	RabinKarp(str, pattern);

	system("pause");
	return 0;
}


int RabinKarp(string str, string pattern) {
	int m = str.size();
	int n = pattern.size();
	int pattern_hashcode = hash_(pattern);
	int str_hashcode = hash_(str.substr(0, n));
	for (int i = 0; i < m - n + 1; i++) {
		if (pattern_hashcode == str_hashcode && compareString(i, str, pattern)) {
			cout<< i << endl;
		}
		if (i < m - n) {
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