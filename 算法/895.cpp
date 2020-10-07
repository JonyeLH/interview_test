#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int > nums(n);
	unordered_map<int, int> map;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
		map[nums[i]]++;
	}
	for (auto k : map) {
		if (k.second == 2)
			cout << k.first;
	}


	system("pause");
	return 0;
}
