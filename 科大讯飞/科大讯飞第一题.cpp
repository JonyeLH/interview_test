//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n, m, value;
//	cin >> n >> m;
//	vector<int> nums;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> value;
//			nums.push_back(value);
//		}
//	}
//	
//	int pos = 0;
//	int sum = nums[0];
//	while (pos <= nums.size()-m) {
//		if (nums[pos + 1] < nums[pos + m]) {
//			pos = pos + m;
//			sum += nums[pos];
//		}
//		else {
//			pos = pos + 1;
//			sum += nums[pos];
//		}
//		if (pos >= nums.size() - m) {
//			for (int y = pos; y < nums.size()-1; y++) {
//				pos = pos + 1;
//				sum += nums[pos];
//			}
//			break;
//		}
//	}
//	cout << sum << endl;
//
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
//
vector <int > result_array;
vector <vector <int >> all_method_array;
void DFS(int a[5][5], int toRight, int toDown) {
	if (toRight == 4 && toDown == 4) {
		all_method_array.push_back(result_array);
		return;
	}
	if (toRight != 4) {
		result_array.push_back(a[toRight][toDown]);
		DFS(a, toRight + 1, toDown);
		result_array.pop_back();
	}
	if (toDown != 4) {
		result_array.push_back(a[toRight][toDown]);
		DFS(a, toRight, toDown + 1);
		result_array.pop_back();
	}
}
int main() {
	clock_t start = clock();
	cout << "start time" << start << endl;
	int a[5][5] = { { 1,3,40,1,1 },{ 1,3,40,1,1 },{ 1,3,40,1,1 },{ 1,3,40,1,1 },{ 1,3,40,1,1 } };
	DFS(a, 0, 0);
	vector< int > result;
	int res = 0;
	for (auto c : all_method_array) {
		for (auto i : c) {
			res += i;
		}
		result.push_back(res + a[4][4]);
		res = 0;
	}
	int max = 0;
	for (auto a : result) {
		if (a >= max) {
			max = a;
		}
	}
	cout << max << endl;
	clock_t end = clock();
	cout << " end time" << endl;
	cout << " time" << ((double)(end - start)) / CLK_TCK << endl;
	return 0;
}