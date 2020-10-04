//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector <int> nums(n);
//	for (int i = 0; i < n; i++) {
//		cin >> nums[i];
//	}
//
//	int begin = 0;
//	int end = n;
//	while (end >= begin) {
//		int mid = ((end - begin) >> 1 + begin);
//		int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			if (nums[i] >= begin && nums[i] <= mid) {
//				cnt++;
//			}
//		}
//		if (end == begin) {
//			if (cnt > 1) {
//				return begin;
//			}
//			else {
//				break;
//			}
//		}
//		if (cnt > (mid - begin)) {
//			end = mid;
//		}
//		else
//			begin = mid+1;
//	}
//	
//	cout << begin << endl;
//
//
//	system("pause");
//	return 0;
//}