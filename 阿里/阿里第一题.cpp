/*

实现一个双端队列
1 表示头插		2 表示尾插
3 表示头删		4 表示尾删

输入：
7		表示有多少组操作数
2 3		尾插3	[3]
1 3		头插3	[3 3]
2 4		尾插4	[3 3 4]
3		头删	[3 4]
3		头删	[4]
2 5		尾插5	[4 5]
1 1		头插1	[1 4 5]

输出： 1 4 5
*/


#include <iostream>
#include <deque>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int N,op, temp;
	cin >> N;

	vector<pair<int, int>> res;
	unordered_map<int, int> map;

	for (int i = 0; i<N; i++) {
		cin >> op;
		if (op == 3 || op == 4) {
			res.emplace_back(op, INT32_MAX + 1);	//pair的第二参数设定为不可能的数，int的最大值+1
			//map[op];
			continue;
		}	
		cin >> temp;	
		res.emplace_back(op, temp);
		//map[op] = temp;
	}

	deque<int> que;
	for (auto j : res) {
		if (j.first == 1)
			que.push_front(j.second);
		else if (j.first == 2) {
			que.push_back(j.second);
		}
		else if (j.first==3) {
			if (que.size() < 2)	return 0;	//判断如果顺序操作后只有一个数，则不能再删除
			que.pop_front();
		}
		else {
			if (que.size() < 2)	return 0;	//判断如果顺序操作后只有一个数，则不能再删除
			que.pop_back();
		}
	}
	// 打印输出
	int n = que.size();
	for (int z = 0; z < n; z++) {
		int top = que.front();
		que.pop_front();
		cout << top <<" ";
	}

	return 0;
}


// //vector 的pair用法
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(int argc, char** argv) {
//	vector<pair<int, int> > power;
//	power.emplace_back(make_pair(1, 1));	//使用emplace_back压入数据
//	power.emplace_back(2, 2);
//	power.emplace_back(1, 1);
//
//	//遍历输出
//	for (int i = 0; i<power.size(); i++) {
//		cout << power[i].first << "," << power[i].second << endl;
//	}
//
//	//使用迭代器也可以遍历输出
//	vector<pair<int, int> > ::iterator iter; //访问vector
//	for (iter = power.begin(); iter != power.end(); iter++)
//	{
//		cout << iter->first << "," << iter->second << endl;
//	}
//
//	return 0;
//}
