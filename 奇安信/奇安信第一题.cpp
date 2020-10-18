#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	*
	* @param matrix int���Ͷ�ά����
	* @param matrixRowLen int matrix��������
	* @param matrixColLen int* matrix��������
	* @return int����
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












