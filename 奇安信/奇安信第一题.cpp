#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	*
	* @param matrix int整型二维数组
	* @param matrixRowLen int matrix数组行数
	* @param matrixColLen int* matrix数组列数
	* @return int整型
	*/
	int maxValue(int** matrix, int matrixRowLen, int* matrixColLen) {
		// write code here
		vector<int> dp(*matrixColLen, matrix[0][0]);
		for (int i = 1; i<*matrixColLen; i++) {
			dp[i] = matrix[0][i] + dp[i - 1];
		}
		for (int i = 1; i<matrixRowLen; ++i) {
			dp[0] += matrix[i][0];
			for (int j = 1; j<*matrixColLen; ++j) {
				dp[j] = matrix[i][j] + max(dp[j], dp[j - 1]);
			}
		}
		return dp[*matrixColLen - 1];
	}
};












