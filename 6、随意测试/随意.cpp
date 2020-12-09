#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	vector<int> nums{ 1,1,3,4,5,3,6 };
	unordered_map<int, int> counter;
	for (int num : nums) {
		counter[num]++;
	}

	for (auto & it : counter) {
		int key = it.first;
		int val = it.second;
		cout << key << ":" << val << endl;
	}

	return 0;
}