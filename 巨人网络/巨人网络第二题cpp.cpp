/*��ACMģʽ
������ľ���˳ʱ����ת90��

���룺
���� matrix =
[
[1,2,3],
[4,5,6],
[7,8,9]
],

���:
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
		// C++ ����� = ������ֵ��������õ�һ���µ�����
		auto matrix_new = matrix;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				matrix_new[j][n - i - 1] = matrix[i][j];
			}
		}
		// ����Ҳ��ֵ����
		return matrix = matrix_new;
	}
};
