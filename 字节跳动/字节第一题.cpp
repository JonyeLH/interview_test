/////*
////����һ���ַ������ж����Ƿ�����ȫѭ��������ѭ���ģ������̵�ѭ���Ӵ��������������
////������abababab�����ab������ab���������ab
////�����벻����ȫѭ�����������������abcabcababc�����abcabcababc
////*/
////#include <iostream>
////#include <string>
////
////using namespace std;
////
////int main()
////{
////	string s;
////	getline(cin, s);
////	//cout << s << endl;
////	string ss = s;
////	s = s + s[0];
////	s.erase(0, 1);
////	int pos = 1;
////	while (s != ss) {
////		s = s + s[0];
////		s.erase(0, 1);
////		pos++;
////	}
////	for (int i = 0; i < pos; i++) {
////		cout << ss[i];
////		//if (1 != pos - 1)	cout << " ";
////	}
////
////	system("pause");
////	return 0;
////}
//
//
//
//
//#pragma GCC optimize(2)
////#include<bits/stdc++.h>
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#define ll long long
//#define maxn 100000005
//#define inf 1e9
//#define pb push_back
//#define rep(i,a,b) for(int i=a;i<=b;i++)
//#define per(i,a,b) for(int i=a;i>=b;i--)
//using namespace std;
//
//inline int read()
//{
//	int x = 0, w = 1; char c = getchar();
//	while (c<'0' || c>'9') { if (c == '-') w = -1; c = getchar(); }
//	while (c <= '9'&&c >= '0') { x = (x << 1) + (x << 3) + c - '0'; c = getchar(); }
//	return w == 1 ? x : -x;
//}
//
//int nxt[maxn];
//char s[maxn];
//
//int main()
//{
//	//freopen("t1.in","r",stdin);
//	scanf_s("%s", s + 1); int l = strlen(s + 1);
//	for (int i = 2, k = 0; i <= l; i++)
//	{
//		while (k&&s[i] != s[k + 1]) k = nxt[k];
//		if (s[i] == s[k + 1]) k++;
//		nxt[i] = k;
//	}
//	int p = l - nxt[l]; if (l%p != 0) p = l;
//	rep(i, 1, p) printf("%c", s[i]);
//	return 0;
//}
