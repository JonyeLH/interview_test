/*
实现计算器
实现计算器的：+、-、*、幂运算(^)

输入描述：
第一行一个整数n，表示有n组输入
接下来n行，每行前两个是整数，第三个是操作数

输出：
n行计算结果

结果=可能会很大，取模1e9+7

例如：
输入：
5
1 2 +
3 4 -
10000000 1000000 *
2 3 ^
2 10000000000 ^

输出：

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
//		//string single = to_string(nums[i][2]);	//使用string的to_string实现数字转字符
//		//string A[4] = { "+", "-" , "*", "^"};		//string的字符串数组的声明和初始化
//		//printf("%c", out);						//ASCII码输出转换字符
//		//cout << (int)(nums[i][0]-'0');			//字符强制转换为整型
//		//atoi(const cahr*)							//char转成整型
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
实现计算器
实现计算器的：+、-、*、幂运算(^)

输入描述：
第一行一个整数n，表示有n组输入
接下来n行，每行前两个是整数，第三个是操作数

输出：
n行计算结果

结果=可能会很大，取模1e9+7

例如：
输入：
5
1 2 +
3 4 -
10000000 1000000 *
2 3 ^
2 10000000000 ^

输出：

*/

////错误解法
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
//		//string single = to_string(nums[i][2]);	//使用string的to_string实现数字转字符
//		//string A[4] = { "+", "-" , "*", "^"};		//string的字符串数组的声明和初始化
//		//printf("%c", out);						//ASCII码输出转换字符
//		//cout << (int)(nums[i][0]-'0');			//字符强制转换为整型
//		//atoi(const cahr*)							//char转成整型
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