//
//
//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <set>
//
////美团第一题
//int main() {
//	int n, p, q;
//	cin >> n >> p >> q;
//	set<int> a;
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		a.insert(temp);
//	}
//
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		if (a.count(temp))
//			cnt++;
//	}
//	cout << p - cnt << " " << q - cnt << " " << cnt << endl;
//	return 0;
//}
////
//
//
//
//
//
////美团第一题
//using namespace std;
//int main()
//{
//
//	vector<int> A; vector<int> B;
//	int n, p, q, temp;
//	unordered_map<int, int> hash;
//	cin >> n >> p >> q;
//	for (int i = 0; i<p; i++)
//	{
//		cin >> temp;
//		A.push_back(temp);
//	}
//	for (int i = 0; i<q; i++)
//	{
//		cin >> temp;
//		B.push_back(temp);
//	}
//
//
//	for (int i = 0; i<p; i++)
//		hash[A[i]]++;
//	int count = 0;
//	for (int i = 0; i<q; i++)
//	{
//		if (hash[B[i]] != 0)
//			count++;
//	}
//
//	cout << p - count << " " << q - count << " " << count;
//
//
//	return 0;
//}
//
//
//
//
//
//
//
//
