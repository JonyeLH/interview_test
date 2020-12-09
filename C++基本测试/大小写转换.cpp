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



//#include <iostream>
//
//using namespace std;
//
////#define add(a+b) a+b
//#define s(x) 
//int foo(int n) {
//	if (n < 2)	return n;
//	return foo(n - 1) + foo(n - 2);
//}
//long fun(long num) {
//	long k = 1;
//	do {
//		k *= num % 10;
//		num /= 10;
//
//	} while (num);
//	return k;
//}
//
//void change(int *a, int &b, int c) {
//	c = *a;
//	b = 3;
//	*a = 2;
//}
//
//int main() {
//
//	int a = 1, b = 2, c = 3;
//	change(&a, b, c);
//	cout << a << b << c;
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//class A {
//
//public :
//
//	void virtual f() {
//		cout << "A" << endl;
//	}
//};
//
//
//class B : public A
//{
//public:
//
//	void virtual f() {
//		cout << "B" << endl;
//	}
//};
//
//
//int main() {
//
//	A* pa = new A();
//	pa->f();
//	B* pb = (B*)pa; 
//	pb->f();
//	delete pa, pb;
//	pa = new B(); 
//	pa->f();
//	pb = (B*)pa; 
//	pb->f();
//}

//#define product(x) (x*x)
//
//int main() {
//	int i = 3, j, k;
//	j = product(i++);
//	k = product(++i);
//	printf("j=%d, k=%d", j, k); 
//	return 0;
//}




//int sum(int a)
//{
//	int c = 0; 
//	static int b = 3; 
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//
//
//void main()
//{
//	int l;
//
//	int a = 2;
//
//	for (l = 0; l<5; l++)
//
//	printf(" %d,", sum(a));
//}


//int main()
//{
//	int v[2][10] = { {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }};
//	int(*a)[10] = v;
//
//	cout << **a << endl;
//
//	cout << **(a + 1) << endl;
//
//	cout << *(*a + 1) << endl;
//
//	cout<< *(a[0] + 1) << endl;
//
//	cout<< *(a[1]) << endl;
//
//	return 0;
//}

//#define DOUBLE(x) x+x 
//int main() {
//	//int i;
//	//i = 5*DOUBLE(5);
//	//cout << i << endl;
//
//	char str[] = "hello";
//	char *p = str;
//	int n = 10;
//	cout << sizeof(str) << endl;
//	cout << sizeof(p) << endl;
//	cout << sizeof(n) << endl;
//
//	void fun(char str[100]){
//		cout << sizeof(str) << endl;
//	}
//
//
//	return 0;
//}