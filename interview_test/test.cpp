//#include <iostream>
//using namespace std;
//
////struct s {
////	int i; 
////	char c;
////}*s1=0;
//
//
//
////
////void swap(int *a, int*b) {
////int *t;
////t = a;
////a = b; 
////b = t;
////}
//
//
//
//
////int main(){
////
////	s1 += 8;
////	//s1++;
////
////	//s1 = s1 + 1 + 3;
////
////	//s1 = 8;
////	cout << s1;
////
////	//int x = 1, y = 2;
////	//int*p = &x, *q = &y;
////	//swap(p, q);
////	//printf("%d %d\n", *p, *q);
////
////	system("pause");
////	return 0;
////
////}
//
////
////int sum(int a)
////{
////	int c = 0;
////	static int b = 3;
////	c += 1;
////	b += 2;
////	return (a + b + c);
////}
//
//
////void main() {
////	int l;
////	int a = 2;
////	for (l = 0; l < 5; l++) {
////		printf("%d,", sum(a));
////	}
////	system("pause");
////}
//
//
//
//void Func(char str[100]) {
//	cout<<sizeof(str);
//	system("pause");
//}
//
//
//
//
//int main() {
//
//	char str[100] ;
//	Func(&str[100]);
//
//	void *p = malloc(100);
//	cout << sizeof(p);
//	system("pause");
//}
//
//
//


//#include <iostream>
//using namespace std;

//class A {
//
//public:
//	A() {
//		
//	}
//	const int B = 2;
//	void fun() {
//		cout << B << endl;
//		//return B;
//	}
//};

//int main() {
//	A a;
//	a.fun();
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class cstu
//{
//
//private:
//	//static int a;
//
//public:
//	const int A=21;
//	//const int A;		//const ���������ʼ��
//	int d ;				//��ͨ�����Ƕ����Գ�ʼ������C++11֮��İ汾�������ʼ����
//	void FUN() {
//		//A = 13;	//const ����δ��ʼ���������ʼ������
//		d = 13;	//��ͨ��������ʼ��
//	}
//
//	static int a;		//��̬���ݳ�Ա���������ڳ�ʼ������������������
//
//	static const int B = 22;	//��C++11֮ǰ�İ汾��C++98/C++03��ֻ�� ��̬��������/�ַ�char ���ݳ�Ա���������г�ʼ��
//	static const char b = 'a';	
//	//static const double d = 12.11;	//���ﱨ����̬����float/double�������ܳ�ʼ��
//
//
//	static void fun()	//��̬��Ա������ʹ��
//	{
//		
//		//d = 10;		//���ﱨ��,��̬������Ա�������÷Ǿ�̬���ݳ�Ա��ֻ��ʹ�þ�̬�ĳ�Ա����
//		//cstu::d = 10;
//		cout << "i am static" << endl;
//		a = 20;
//		cout << a << endl;
//	}
//
//	static void show( int a)	
//	{
//		cout << "i am static" << endl;
//		a = 30;
//		cout << a << endl;
//
//	}
//
//	cstu()//:a(2)		//�������޷�����̬��Ա���г�ʼ����
//	{
//		a = 12;			//���¸�a���и�ֵ   ��������û�и�ֵ����ô�����a��ֵ�ͻὫ��̬��Ա������a��ֵ���
//	}
//};
//
//int cstu::a = 13;		//��̬���ݳ�Ա�������ʼ�������Ҳ��ؼ��Ϲؼ���static
//
//
//int main()
//{
//	// �������ʹ�����������������þ�̬��Ա�����;�̬������˵����̬��Ա�����;�̬���������ഴ����ʱ������ռ��
//	cout << cstu::a << endl;	//���Ϊ13����̬���ݳ�Ա�ĳ�ʼ��
//	cstu::fun();	//fun��������Ϊ20
//
//	//����Ҳ����ʹ�����ɶ���ķ�ʽ�����þ�̬��Ա�;�̬����
//	cstu stu;
//	cout << stu.a << endl;	//���캯�����¸�ֵΪ12
//	stu.fun();	//fun��������Ϊ20
//
//	//��̬������Ա�����Դ��뾲̬���ݳ�Ա
//	stu.show(stu.a);	//show��������Ϊ30
//
//
//	system("pause");
//	return 0;
//}



	//int Func(int x);   /*����һ������*/
	//int(*p) (int x);  /*����һ������ָ��*/
	//p = Func;          /*��Func�������׵�ַ����ָ�����p*/


////shopee��һ�⣺ת���ַ������飬����һ���ַ������飬����ַ�����ȥ�����������ַ����������ո��������һ���ַ�����Ǵ�дת���Сд
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	string s;
//	getline(cin,s);		//string�ַ�����������뷽ʽ
//	vector<char> res;
//	if (s.size() == 0)	return 0;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ) {
//			res.push_back(s[i]);
//		}
//		else if (s[i] >= '1' && s[i] <= '9' ) {
//			res.push_back(s[i]);
//		}
//		else if (s[i] == ' ') {
//			continue;
//		}
//		else {
//			continue;
//		}
//	}
//	if (res[0] >= 'A' && res[0] <= 'Z' ) {
//		res[0] = res[0] - 'A' + 'a';	//��дתСд
//		res[0] = res[0] + 32;
//		
//		// || res[0] >= 'a' && res[0] <= 'z'	//Сдת��д����
//		//res[0] = res[0] - 32;	//Сдת�ɴ�д
//	}
//
//	for (int j = 0; j < res.size(); j++) {
//		cout << res[j];
//	}
//	
//	system("pause");
//	return 0;
//}




//#include <iostream>
//
//using namespace  std;
//
//struct xx {
//	long long _x1;
//	char _x2;
//	int _x3;
//	char _x4[2];
//	//static int _x5;
//};
////int  xx::_x5;
//
//int main() {
//	cout<<sizeof(xx);
//	system("pause");
//	return 0;
//}



//#include <stdio.h>
//struct xx {
//	long long _x1;
//	char _x2;
//	int _x3;
//	char _x4[2];
//	//static int _x5;
//};
////int  xx::_x5;
//
//
//int main() {
//	printf("%d", sizeof(xx));
//	
//	return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//
//	string s;
//	scanf_s("%s", s);
//	//cin >> s;
//	//cout << s << endl;
//	//printf("%s", s);
//	system("pause");
//	return 0;
//}





#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//int main() {
//
//	char str[] = "glad to test something";
//	char* p = str;
//	p++;
//	cout << p<<endl;
//	int *p1 = reinterpret_cast<int*>(p);
//	//cout << *p1 << endl;
//	p1++;
//	p = reinterpret_cast<char*>(p1);
//	printf("result is %s\n", p);
//
//	system("pause");
//	return 0;
//}

int main() {
	//int n;
	//cin >> n;
	//vector<int> ans(n);
	//unordered_map<int, int> map;
	//for (int i = 0; i < n; i++) {
	//	cin >> ans[i];
	//	map[ans[i]]++;
	//}
	//int N = ans.size() >> 1;
	//for (auto j : map) {
	//	if (j.second > N)
	//		cout<< j.first<<endl;
	//}
	int n;
	cin >> n;
	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		cin >> ans[i];
	}
	int res = 0;
	for (int i = 0; i < 32; i++) {
		int ones = 0;
		for (int j : ans)
			ones += (j >> i) & 1;
		res += (ones > ans.size() / 2) << i;
	}
	cout << res << endl;


	system("pause");
	return -1;

}

