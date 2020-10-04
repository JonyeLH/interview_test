///*
//
//Á´½Ó£ºhttps://www.nowcoder.com/discuss/500649
//
//*/
//
//#include <iostream>
//#include <set>
//using namespace std;
//
//int n;
//int pre[100001];
//
//void solve() {
//	cin >> n;
//	pre[0] = 0;
//	for (int i = 1; i <= n; i++) {
//		pre[i] = pre[i - 1] ^ i;
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		ans ^= pre[n % i];
//		if ((n / i) % 2) {
//			ans ^= pre[i - 1];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		ans ^= x;
//	}
//	cout << ans << endl;
//}