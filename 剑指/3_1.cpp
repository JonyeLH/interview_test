//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <time.h>
//using namespace std;
//
//int main() {
//	//计算结果为秒
//	clock_t start, stop;
//	double duration;
//	start = clock();
//
//	//ios::sync_with_stdio(0);
//	//cin.tie(0);
//
//	int n;
//	cin >> n;
//	vector<int> ans(n);
//	for (int i=0; i < n; i++) {
//		cin >> ans[i];
//	}
//	int pos;
//	vector<int> res;
//	for (int j = 0; j < n ; j++) {
//		while (ans[j] != j) {
//			if (ans[ans[j]] == ans[j]) {
//				//pos = ans[j];	//只存储一个重复数组
//				res.push_back(ans[j]);	//把所有重复数组存储
//				break;
//			}
//			
//			swap(ans[ans[j]], ans[j]);
//			//int temp = ans[ans[j]];
//			//ans[ans[j]] = ans[j];
//			//ans[j] = temp;
//			
//		}
//	}
//	//cout << pos << endl;	//只输出一个重复的数
//
//	//输出所有重复数
//	for (int j = 0; j < res.size(); j++) {
//		cout << res[j] << endl;
//	}
//
//	stop = clock();
//	duration = ((double)(stop - start)) / CLK_TCK;	//CLOCKS_PER_SEC	//CLK_TCK
//	cout<< "该程序运行的时间是："<< duration << endl;
//
//	system("pause");
//	return 0;
//}