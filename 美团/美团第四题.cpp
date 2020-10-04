///*
//
//给出一串子树的节点个数（包含自身），求是否能构成合法树，要求每个非叶节点至少有两个子节点。
//思路：n=24明显提示我们是dfs+剪枝，先把输入从大到小排序。
//首先预检查：1. arr[0]必须等于n 2. arr[i]不能等于2
//然后dfs：
//1. arr[i]表示i剩下多少总子节点未分配。child[i]表示i目前分配了多少子节点。set<int> can （candidate）存有子节点未分配的节点（即arr[i]大于1的所有i）。
//2. 从x=1开始dfs，每轮dfs去找can中的节点i，如果arr[i] > arr[x]，（ 且不满足（arr[i] - arr[x] == 1 && child[i]==0)，不然i就只能分配x一个子节点，这是不超时的关键。），则把x当成i的字节点，然后去试dfs(x+1).
//3. 直到x=n，检查是否所有arr[i]==1 && child[i] != 1，arr[i]=1因为最后只剩下自己没分配出去。
//
//*/
//#include <iostream>
//#include <algorithm>
//#include<functional>
//#include <set>
//#define REP(i,n) for(int i=0;i<n;i++)
//using namespace std;
//int n;
//int arr[25];
//int child[25];
//
//bool dfs(int x, set<int>& can) {
//	if (x == n) {
//		for (int i = 0; i < n; i++) {
//			if (arr[i] != 1 || child[i] == 1) return false;
//		}
//		return true;
//	}
//	set<int> new_can = can;
//	if (arr[x] != 1) new_can.insert(x);
//	for (int i : can) {
//		if (arr[i] > arr[x]) {
//			if (arr[i] == arr[x] + 1 && child[i] == 0) continue;
//			arr[i] -= arr[x];
//			child[i]++;
//			if (arr[i] == 1) new_can.erase(i);
//			if (dfs(x + 1, new_can)) return true;
//			if (arr[i] == 1) new_can.insert(i);
//			arr[i] += arr[x];
//			child[i]--;
//		}
//	}
//	return false;
//}
//
//void solve() {
//	bool flag = true;
//	REP(i, n) {
//		cin >> arr[i];
//		if (arr[i] == 2) {
//			flag = false;
//		}
//	}
//	if (!flag) {
//		cout << "NO" << endl;
//		return;
//	}
//
//	sort(arr, arr + n, greater<int>());	//从大到小排序	包含在头文件 #include<functional>中
//
//	if (arr[0] != n) {
//		cout << "NO" << endl;
//		return;
//	}
//
//	set<int> can;
//	can.insert(0);
//	memset(child, 0, sizeof(child));
//	if (dfs(1, can)) {
//		cout << "YES" << endl;
//	}
//	else {
//		cout << "NO" << endl;
//	}
//}