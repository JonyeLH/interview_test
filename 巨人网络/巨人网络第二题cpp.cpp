/*非ACM模式
将输入的矩阵顺时针旋转90度

输入：
给定 matrix =
[
[1,2,3],
[4,5,6],
[7,8,9]
],

输出:
[
[7,4,1],
[8,5,2],
[9,6,3]
]
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<vector<int>> rotate(vector<vector<int>>& matrix) {
		int n = matrix.size();
		// C++ 这里的 = 拷贝是值拷贝，会得到一个新的数组
		auto matrix_new = matrix;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				matrix_new[j][n - i - 1] = matrix[i][j];
			}
		}
		// 这里也是值拷贝
		return matrix = matrix_new;
	}
};
