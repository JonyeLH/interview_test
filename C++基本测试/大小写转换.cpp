//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	char str = 'B';
//	char b = str + 32;
//	char c = str + 'a' - 'A';
//
//
//	char str1 = 'a';
//	char s = str1 - 32;
//	char g = str1 + 'A' - 'a';
//
//	cout << b << " " << c << " " << s << " " << g << endl;	//b b A A
//
//	system("pause");
//	return 0;
//}
//
//
//
////int main() {
////
////	char str[] = "ÎÒ°®C++ÑÔÓï";
////
////	char str1[15];
////	char* p = str + 2;
////	while (--p >= str) {
////		strcpy_s(str1, p);
////	}
////	cout << strlen(str1) << endl;
////
////	return 0;
////}
//
//
//
////#include <iostream>
////#include <vector>
////#include <unordered_map>
////using namespace std;
////
////int main() {
////	//int n;
////	//cin >> n;
////	//unordered_map<int, int> map;
////	//while (n != NULL) {
////	//	cin >> n;
////	//	map[n]++;
////	//}
////
////	int n,temp;
////	cin >> n;
////	unordered_map<int, int> map;
////	for (int i = 0; i < n; i++) {
////		cin >>temp;
////		map[temp]++;
////	}
////
////	for (auto j : map) {
////		if (j.second == 1)
////			cout << j.first;
////	}
////
////	return 0;
////}
//
//
//



#include <iostream>

using namespace std;

//#define add(a+b) a+b
#define s(x) 
int foo(int n) {
	if (n < 2)	return n;
	return foo(n - 1) + foo(n - 2);
}
long fun(long num) {
	long k = 1;
	do {
		k *= num % 10;
		num /= 10;

	} while (num);
	return k;
}

int main() {

	/*printf("%d\n", 5 * add(3 + 4));*/
	//cout<<foo(5);
	//if (n < 2)	return n;
	//long num = 5;
	//long a = fun(num);
	//cout << a;
	int aee[] = { 1,2,3 };
	int *p = aee;
	*(p++) += 89;
	printf("%d,%d\n", *p, *(++p));
	return 0;
}