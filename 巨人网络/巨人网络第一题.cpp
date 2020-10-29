/*	非ACM模式
输入一个十进制，转成二进制后取反操作后，再转成十进制输出

输入：5
输出：2
解释：5 的二进制表示为 "101"，其二进制反码为 "010"，也就是十进制中的 2 。


*/

//方法一：异或运算法
class Solution {
public:
	int bitwiseComplement(int N) {

		if (N == 0)
			return 1;

		int temp1 = 1;
		int temp2 = N;

		while (temp2>0) {//不停用temp1对原整数进行异或运算，每次运算结束后将temp1朝左移动1位

			N ^= temp1;
			temp1 = temp1 << 1;
			temp2 = temp2 >> 1;
		}


		return N;
	}
};

//方法二：高位差值法
class Solution {
public:
	int bitwiseComplement(int N) {
		int temp = 2;
		while (temp <= N) {

			temp = temp << 1;
		}
		return temp - N - 1;
	}
};