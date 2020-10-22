/*
跳舞机
输入两个字符串，比较每个字符是否相等，相等则得分20，否则扣10分，当分数为0不会往下继续扣分（及不存在负分）

输入：两行字符串，完全由WSAD组成，保证两行字符串长度相同，字符串长度<=2000
WASDWWSAD
WASSWWAAD
输出：
120
*/

//只过了27%测试
#include <iostream>
#include <string>
using namespace std;
int main() {
	string target, patter;
	cin >> target >> patter;
	//判断子串的长度是否与原串是否相等
	int sum = 0;
	for (int i = 0; i < target.size(); i++) {
		if (target[i] == patter[i])
			sum += 20;
		else {
			if (sum <= 0) {
				sum = 0;
				continue;
			}
			sum -= 10;
		}
	}
	cout << sum << endl;
	return 0;
}