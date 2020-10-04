//#include <iostream>
//#include <unordered_map>
//#include <vector>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int n;
//		cin >> n;
//		vector<int> res(n);
//		unordered_map<int, int>map;
//		for (int i = 0; i < n; i++) {
//			cin >> res[i];
//			map[res[i]]++;
//		}
//
//		vector<int> ans;
//		for (auto a : map) {
//			if (a.second == 1)
//				ans.push_back(a.first);
//		}
//
//		for (int j = 0; j < ans.size(); j++) {
//			cout << ans[j];
//			if (j != ans.size() - 1)
//				cout << " ";
//		}
//
//		if (i != N - 1) {
//			cout << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}