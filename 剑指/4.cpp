//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////cmp函数，控制sort函数的数据排序格式，升序、降序
//bool cmp(vector<int> a, vector<int> b)
//{
//	int n = a.size() - 1;
//	for (int i = 0; i<n; i++) {
//		if (a[i] != b[i])
//			return a[i]<b[i];
//	}
//}
//
//
//int main() {
//	int raws, cols, target, temp;
//	cin >> raws >> cols >> target;
//	vector<vector<int>> nums(raws,vector<int>(cols,0));
//	for (int i = 0; i < raws; i++) {
//		for (int j = 0; j < cols; j++) {
//			cin >> nums[i][j];
//		}
//	}
//
//	// // 尝试输入无序数据，使用sort函数进行排序，结果只进行单列的排序
//	//sort(nums.begin(), nums.end(), cmp);
//
//	//for (int posi = 0; posi < nums.size(); posi++) {
//	//	for (int posj = 0; posj < nums[0].size(); posj++) {
//	//		cout << nums[posi][posj] << " ";
//	//	}
//	//	
//	//}
//
//	int raw = 0;
//	int col = nums[0].size() - 1;
//	//for (raw, col; raw < nums.size(), col >= 0;raw++,col--)
//	while (raw < nums.size() && col >= 0) {
//		if (nums[raw][col] == target) {
//			cout << raw << " " << col << endl;
//			break;
//		}
//		else if (nums[raw][col]>target)
//			col--;
//		else
//			raw++;		
//	}
//	
//	system("pause");
//	return 0;
//}