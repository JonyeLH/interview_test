////大胃王：动态规划、贪婪算法
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//存放食物和下标
struct food {
	int f;
	int pos;
};

//规定sort按照从大到小排序
bool cmp(food a, food b) {
	return a.f > b.f;		
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int n, m;
		cin >> n >> m;
		vector<food> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i].f ;
			a[i].pos = i+1 ;
		}

		sort(a.begin(), a.end(), cmp);	//自定义cmp从大到小排序	
		int temp_sum = 0;
		vector<int> res;

		for (int j = 0; j < n; j++) {
			//cout << a[j].f;
			temp_sum += a[j].f;
			res.push_back(a[j].pos);
			if (temp_sum > m)
				break;
		}	
		if (temp_sum < m) {
			cout << -1 << endl;
		}
		else {
			for (int i = 0; i < res.size(); i++) {
				//cout << res[i] << " ";
				cout << res[i];
				if (i != res.size() - 1)	//没输出一个结果空格隔开
					cout << " ";
			}
			if (i != T - 1)	cout << endl;	//
		}
	}
	system("pause");
	return 0;
}




////方法一
//#include <iostream> 
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct food {
//	int f;
//	int pos;
//};
//bool cmp(food a, food b) {
//	return a.f > b.f;
//}
//using namespace std;
//
//int main() {
//	int T;
//	cin >> T;
//	for (int t = 0; t< T; t++) {
//		int n, m;
//		cin >> n >> m;
//		vector<food> foods(n);
//		for (int i = 0; i< n; i++) {
//			cin >> foods[i].f;
//			foods[i].pos = i + 1;
//		}
//		sort(foods.begin(), foods.end(), cmp);
//		/*for (int i= 0; i< foods.size(); i++) {
//		cout << foods[i].f << " "<< foods[i].i<< endl;
//		}*/
//		int cur_sum = 0;
//		vector<int> res;
//		for (int i = 0; i< n; i++) {
//			cur_sum += foods[i].f;
//			res.push_back(foods[i].pos);
//			if (cur_sum >= m) break;
//		}
//		if (cur_sum < m) {
//			printf("-1");
//		}
//		else {
//			printf("%d\n", res.size());
//			for (int i = 0; i< res.size(); i++) {
//				printf("%d", res[i]);
//				if (i != res.size() - 1) printf(" ");
//			}
//		}
//		if (t != T - 1) printf("\n");
//	}
//	cout << endl;
//	system("pause");
//}



//
////方法二
//#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//using ll = long long;
//int n, m;
//
//struct Node
//{
//	int value;
//	int idx;
//	Node(int v_, int i_) :value(v_), idx(i_) {}
//	bool operator < (const Node& other)
//	{
//		return value > other.value;
//	}
//};
//
//void helper(vector<Node>& v)
//{
//	sort(v.begin(), v.end());
//	vector<int> ans;
//	int sum = 0;
//	for (const auto& node : v)
//	{
//		sum += node.value;
//		ans.push_back(node.idx);
//		if (sum >= m) break;
//	}
//	if (sum >= m)
//	{
//		printf("%zu\n", ans.size());
//		sort(ans.begin(), ans.end());
//		printf("%d", ans[0]);
//		for (int i = 1; i < ans.size(); i++)
//		{
//			printf(" %d", ans[i]);
//		}
//		printf("\n");
//	}
//	else printf("-1\n");
//}
//
//int main()
//{
//	int t;
//	scanf_s("%d", &t);
//	while(t--)
//	{
//		scanf_s("%d%d", &n, &m);
//		vector<Node> v;
//		int value;
//		for (int i = 1; i <= n; i++)
//		{
//			scanf_s("%d", &value);
//			v.emplace_back(Node(value, i));
//		}
//		helper(v);
//	}
//	system("pause");
//	return 0;
//}