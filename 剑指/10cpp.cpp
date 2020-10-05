#include <iostream>
#include <vector>
using namespace std;
int helper(vector<int>& memo, int n);
//动态规划，从下往上循环
void fib(int n) {
	vector<int> dp(n + 1, 0);
	dp[1] = dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
	}
	cout<< dp[n] << endl;
}

//动态规划，从上往下递归
int fib_recursive(int n) {
	if (n < 1)	return 0 ;
	vector<int> memo(n + 1, 0);
	int res= helper(memo, n);
	cout << res<<endl;
	return res;
}

int helper(vector<int>& memo, int n) {
	if (n == 1 || n == 2)
		return 1;
	if (memo[n] != 0) {
		return memo[n];
	}
	memo[n] = helper(memo, n - 1) + helper(memo, n - 2);
	return memo[n];
}

int main() {
	int n;
	cin >> n;
	//int nums[2] = { 0,1 };
	if (n < 2) {
		cout << n << endl;
		system("pause");
		return 0;
	}
	int FibNone = 1, FibNtwo = 0;
	int FibN=0;
	for (int i = 2; i <= n; i++) {
		FibN = (FibNone + FibNtwo)%1000000007;	
		FibNtwo = FibNone;
		FibNone = FibN;
	}
	cout << FibN << endl;

	fib(n);
	fib_recursive(n);

	system("pause");
	return 0;
}