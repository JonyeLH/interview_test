///*
//第二题
//一个长为n的数组，给出m个询问，询问有2中类型：
//1 l r：询问区间[l，r]内有多少子序列的乘积为奇数；
//2 l r：询问区间[l，r]内有多少子序列的乘积为偶数；
//某个序列的子序列是从最初序列通过去除某些元素但不破坏余下元素的相对位置（在前或在后）而形成的新序列
//
//输入描述：
//	第一行2个整数n，m，表示数组长度和询问个数
//	第二行给出n个空格隔开的数
//	接下来m行每行三个整数表示操作类型
//	1<= l<=r<=n,	m<=2*10^5
//
//输出描述：
//	输出m行，每行表示对应询问的答案，因为答案可能很大，输出对10^9+7取模的结果
//
//例：
//输入：
//	4 2
//	1 2 3 4
//	1 1 3
//	2 1 3 
//输出：
//	
//
//*/
//#include <iostream> 
//#include <vector>
//#include <algorithm>
//using namespace std;
//
///*
//奇 * 奇 = 奇
//偶 * 偶 = 偶
//奇 * 偶 = 奇
//*/
//const int M = 1000000007;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	vector<int> a(n);
//	for (int t = 0; t< n; t++) {
//		cin >> a[t];
//	}
//	for (int t = 0; t< m; t++) {
//		int choose, l, r;
//		cin >> choose >> l >> r;
//		vector<vector<int> > dp(2, vector<int>(r - l + 2, 0));
//		//1 for奇数 ,2 for 偶数 
//		for (int i = 1; i< r - l + 2; i++) {
//			// 奇 
//			//cout<< a[l+i-2]<< endl; 
//			dp[0][i] = a[l + i - 2] % 2 == 0 ? dp[0][i - 1] % M : (2 * dp[0][i - 1] + 1) % M;
//			// 偶 
//			dp[1][i] = a[l + i - 2] % 2 == 0 ? (2 * dp[1][i - 1] + dp[0][i - 1] + 1) % M : 2 * dp[1][i - 1] % M;
//		}
//		printf("%d", dp[choose - 1][r - l + 1]);
//		if (t != m - 1) printf("\n");
//	}
//	system("pause");
//}