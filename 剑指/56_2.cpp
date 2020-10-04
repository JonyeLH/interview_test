//#include <iostream>
//#include <unordered_map>
//#include <vector>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	vector<int> temp(n);
//	unordered_map<int, int> map;
//	for (int i = 0; i < n; i++) {
//		cin >> temp[i];
//		map[temp[i]]++;
//	}
//	vector<int> res;
//	for (auto i : map) {
//		if (i.second == 1)
//			res.push_back(i.first);
//	}
//
//	for (int i = 0; i < res.size(); i++) {
//		cout << res[i];
//		if (i != res.size() - 1)
//			cout << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
