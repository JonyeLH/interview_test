//思路：统计所有数字出现的次数，奇数次数的就说明少的
/*
一片N*N的森林（N*N棵树），为保证让护林员在每行每列都能看到所有的树
森林中的树每行从左到右高度递增，每列从上到下递增，不同行不同列不可能存在高度相同的树。
护林员会记录每行每列树的高度共为2N条记录
例如：森林N=3
1 2 3
2 3 4
3 5 6
完成记录：
1 2 3
2 3 4
3 5 6
1 2 3
2 3 5 
3 4 6
现在护林员丢失了一张记录，请找出那张记录


input
3
3 8 12
9 13 20
3 6 9
8 10 13
12 17 20

output
6 10 17
*/
//#include "bits/stdc++.h"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace  std;
int a[20008];

int main() {
	vector<int> res;
	unordered_map<int, int> map;
	int N;
	cin >> N;
	int m = (2 * N - 1) * N;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
		map[a[i]]++;
	}
	for (auto i : map) {
		if (i.second % 2 == 1)
			res.push_back(i.first);
	}

	sort(res.begin(), res.end());
	for (int j = 0; j < res.size(); j++) {
		cout << res[j] << " ";
	}
	cout << endl ;

	system("pause");
	return 0;
}



