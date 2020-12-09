
//≤Â»Î≈≈–Ú
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int N;
	cin >> N;
	vector<int>nums(N);
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

	int min, k, temp;
	int n = nums.size();
	vector<int> ans;
	for (int j = 0; j < n - 1; j++) {
		min = j;
		for (k = j + 1; k < n; k++) {
			if (nums[k] < nums[min])
				min = k;
		}
		if (min != j) {
			swap(nums[min], nums[j]);
		}
	}
	for (int x = 0; x < nums.size(); x++) {
		cout << nums[x] << " ";
	}

	system("pause");
	return 0;
}