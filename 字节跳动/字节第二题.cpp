/*
ʵ�ּ�����
ʵ�ּ������ģ�+��-��*��������(^)

����������
��һ��һ������n����ʾ��n������
������n�У�ÿ��ǰ�������������������ǲ�����

�����
n�м�����

���=���ܻ�ܴ�ȡģ1e9+7

���磺
���룺
5
1 2 +
3 4 -
10000000 1000000 *
2 3 ^
2 10000000000 ^

�����

*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> res;
//	long long out = 0;
//	vector<vector<char>> nums(n, vector<char>(3, 0));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> nums[i][j];
//		}
//		//cout << nums[i][2];
//		//string single = to_string(nums[i][2]);	//ʹ��string��to_stringʵ������ת�ַ�
//		//string A[4] = { "+", "-" , "*", "^"};		//string���ַ�������������ͳ�ʼ��
//		//printf("%c", out);						//ASCII�����ת���ַ�
//		//cout << (int)(nums[i][0]-'0');			//�ַ�ǿ��ת��Ϊ����
//		//atoi(const cahr*)							//charת������
//		if (nums[i][2] == '+')			
//			out = (int)(nums[i][0] - '0') + (int)(nums[i][1] - '0');
//			//cout << out;			
//		if (nums[i][2] == '-') 
//			out = (int)(nums[i][0] - '0') - (int)(nums[i][1] - '0');		
//		if (nums[i][2] == '*') 
//			out = (int)(nums[i][0] - '0') * (int)(nums[i][1] - '0');
//		
//		if (nums[i][2] == '^') {
//			int temp = (int)(nums[i][0]-'0');
//			out = temp;
//			int N = (int)(nums[i][1] - '0');
//			for (int z = 0; z < N - 1; z++) {
//				out *= temp;
//			}
//		}
//		res.push_back(out);
//	}
//
//	for (int y = 0; y < res.size(); y++) {
//		cout << res[y] << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}


/*
ʵ�ּ�����
ʵ�ּ������ģ�+��-��*��������(^)

����������
��һ��һ������n����ʾ��n������
������n�У�ÿ��ǰ�������������������ǲ�����

�����
n�м�����

���=���ܻ�ܴ�ȡģ1e9+7

���磺
���룺
5
1 2 +
3 4 -
10000000 1000000 *
2 3 ^
2 10000000000 ^

�����

*/

////����ⷨ
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> res;
//	long long out = 0;
//	vector<vector<char>> nums(n, vector<char>(3, 0));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> nums[i][j];
//		}
//		//cout << nums[i][2];
//		//string single = to_string(nums[i][2]);	//ʹ��string��to_stringʵ������ת�ַ�
//		//string A[4] = { "+", "-" , "*", "^"};		//string���ַ�������������ͳ�ʼ��
//		//printf("%c", out);						//ASCII�����ת���ַ�
//		//cout << (int)(nums[i][0]-'0');			//�ַ�ǿ��ת��Ϊ����
//		//atoi(const cahr*)							//charת������
//		if (nums[i][2] == '+')			
//			out = (int)(nums[i][0] - '0') + (int)(nums[i][1] - '0');
//			//cout << out;			
//		if (nums[i][2] == '-') 
//			out = (int)(nums[i][0] - '0') - (int)(nums[i][1] - '0');		
//		if (nums[i][2] == '*') {
//			long long out1 = (long long)(nums[i][0] - '0') * (long long)(nums[i][1] - '0');
//			out = out1 % 1000000007;
//		}
//
//		
//		if (nums[i][2] == '^') {
//			int temp = (int)(nums[i][0]-'0');
//			int out1 = temp;
//			int N = (int)(nums[i][1] - '0');
//			for (int z = 0; z < N - 1; z++) {
//				out1 *= temp;
//			}
//			out = out1 % 1000000007;
//		}
//		//int last = out % 1000000007;
//		res.push_back(out);
//	}
//
//	for (int y = 0; y < res.size(); y++) {
//		cout << res[y] << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}




#pragma GCC optimize(2)
#include<bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define inf 1e9
#define pb push_back
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
using namespace std;

inline int read()
{
	int x = 0, w = 1; char c = getchar();
	while (c<'0' || c>'9') { if (c == '-') w = -1; c = getchar(); }
	while (c <= '9'&&c >= '0') { x = (x << 1) + (x << 3) + c - '0'; c = getchar(); }
	return w == 1 ? x : -x;
}

const ll mod = 1000000007;

inline ll pw(ll a, ll b)
{
	ll ans = 1, base = a;
	while (b)
	{
		if (b & 1) 
			ans = (ans*base) % mod;
		base = (base*base) % mod; 
		b >>= 1;
	}
	return ans;
}


int main() {
	int N;
	cin >> N;
	while (N--) {
		long long n, m;
		cin >> n >> m;
		char opt;
		cin >> opt;
		if (opt == '+')	printf("%d\n", (n + m) % mod);
		else if (opt == '-') printf("%d\n", n - m);
		else if (opt == '*')	printf("%lld\n", (n*m) % mod);
		else
		{
			printf("%d\n", pw(n, m));
		}
	}
	system("pause");
	return 0;
}