//#include <iostream>
//#include <vector>
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//
//};
//TreeNode* rebuild_tree(vector<int> nums, vector<int> ans);
//
//TreeNode* rebuild(vector<int>::iterator nums_start, vector<int>::iterator nums_end, vector<int>::iterator ans_start, vector<int>::iterator ans_end);
//
//
//TreeNode* rebuild_tree(vector<int> nums, vector<int> ans) {
//	return rebuild(nums.begin(), nums.end(), ans.begin(), ans.end());
//}
//TreeNode* rebuild(vector<int>::iterator nums_start, vector<int>::iterator nums_end, vector<int>::iterator ans_start, vector<int>::iterator ans_end) {
//	int root = nums_start[0];
//	auto pos = find(ans_start, ans_end, root);
//	TreeNode* tree = new TreeNode(root);
//	tree->left = rebuild(nums_start + 1, nums_start + 1 + (pos - ans_start), ans_start, pos);
//	tree->right = rebuild(nums_start + 1 + (pos - ans_start), nums_end, pos + 1, ans_end);
//	return tree;
//}
//int main() {
//	int n;
//	cin >> n ;
//	vector<int> nums(n),ans(n);
//	for (int i = 0; i < n; i++) {
//		cin >> nums[i];
//		cin >> ans[i];
//	}
//	//for (int k = 0; k < n; k++) {
//	//	cout << nums[k] << " ";
//	//	cout << ans[k] << " ";
//	//}
//
//	rebuild_tree(nums, ans);
//
//	system("pause");
//	return 0;
//}
//
//
//
