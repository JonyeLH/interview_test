//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//};
//
//bool Verify(vector<int>nums, int length) {
//	if (nums.size() == 0)	return false;
//	int root = nums[length-1];
//	vector<int> res1;
//	vector<int> res2;
//	int cnt_1 = 0, cnt_2 = 0;;
//	for (int i = 0; i < length; i++) {
//		if (nums[i] < root) {
//			res1.push_back(nums[i]); 
//			cnt_1++;
//		}
//		if (nums[i] > root) {
//			res2.push_back(nums[i]);
//			cnt_2++;
//		}
//	}
//	//´úÂë´íÎó
//	bool left = true;
//	if (cnt_1 > 0) {
//		left = Verify(res1, cnt_1);
//	}
//
//	bool right = true;
//	if (cnt_2 > 0) {
//		right = Verify(res2, cnt_2);
//	}
//
//	return left&&right;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	vector<int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//
//	bool pos=Verify(a, n);
//	cout << pos<<endl;
//
//	system("pause");
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
//
//
//
//
//
//
//
//
////bool Verify(vector<int>nums, int length) {
////	if (nums.size() == 0)	return false;
////	int root = nums[length - 1];
////	int i = 0;
////	for (; i < length - 1; i++) {
////		if (nums[i] > root)
////			break;
////	}
////
////	int j = i;
////	for (; j < length - 1; j++) {
////		if (nums[j] < root)
////			return false;
////	}
////	bool left = true;
////	if (i > 0) {
////		left = Verify(nums, i);
////	}
////	bool right = true;
////	if (i < length - 1) {
////		right = Verify(nums , length - i - 1);
////	}
////}