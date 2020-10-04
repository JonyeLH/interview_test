////深信服第二题
///*
//给出一个n个数的数组，给出m个询问，每个询问为一个区间[l，r]，代表整个区间l-r里面有多少个数是n个数里面至少一个数的约数
//比如8 9 20
//区间[1,5]
//1是所有数的约数
//2是8和20的约数
//3是9的约数
//4是8和20的约数
//5是20的约数
//所以答案输出5
//*/
//
////#include "bits/stdc++.h"	//万能头文件
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//
////暴力法会超时，
//int main() {
//	vector<int> nums;
//	queue<int> qujian;
//	int n, m, temp, l, r;
//	cin >> n >> m;
//	for (int i = 0; i< n; i++) {
//		cin >> temp;
//		nums.push_back(temp);
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> l >> r;
//		qujian.push(l);
//		qujian.push(r);
//	}
//	while(m){
//		int cnt = 0;
//		int left = qujian.front();
//		qujian.pop();
//		int right = qujian.front();
//		qujian.pop();
//		for (int i = left; i <= right; i++) {
//			int pos = 0;
//			for (int j = 0; j < nums.size(); j++) {
//				if (nums[j] % i == 0) {
//					pos = 1;
//					break;
//				}
//			}
//			cnt += pos;
//		}
//		cout << cnt << endl;
//		m--;
//	}
//	system("pause");
//	return 0;
//}
