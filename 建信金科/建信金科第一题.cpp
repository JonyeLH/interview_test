///*
//
//寻找唯一特等奖：
//
//公司年会的抽奖箱里包含一个特等奖，其它的新人奖、口碑将、创新奖都有两名，请设计函数找出唯一的特等奖
//输入： [1,2,3,2,3]
//输出： 1
//
//*/
//
//#include<iostream>
//#include <unordered_map>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n,temp;
//	cin >> n;
//
//	//在网页中的输入写法
//	//while (n != NULL) {
//	//	cin >> n;
//	//}
//
//	unordered_map <int, int> nums(n);
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		nums[temp]++;
//	}
//	vector<int> res;
//	for(auto j :nums) {
//		if (j.second == 1)
//			res.push_back(j.first);
//			//cout << j.first;	//如果只有一个唯一，就直接输出
//	}
//
//	//以防出现多个只有一个的情况，把最后一个输出
//	int number = res.size()-1;
//	cout << res[number];
//
//	return 0;
//}