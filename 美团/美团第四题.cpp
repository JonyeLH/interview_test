///*
//
//����һ�������Ľڵ�������������������Ƿ��ܹ��ɺϷ�����Ҫ��ÿ����Ҷ�ڵ������������ӽڵ㡣
//˼·��n=24������ʾ������dfs+��֦���Ȱ�����Ӵ�С����
//����Ԥ��飺1. arr[0]�������n 2. arr[i]���ܵ���2
//Ȼ��dfs��
//1. arr[i]��ʾiʣ�¶������ӽڵ�δ���䡣child[i]��ʾiĿǰ�����˶����ӽڵ㡣set<int> can ��candidate�������ӽڵ�δ����Ľڵ㣨��arr[i]����1������i����
//2. ��x=1��ʼdfs��ÿ��dfsȥ��can�еĽڵ�i�����arr[i] > arr[x]���� �Ҳ����㣨arr[i] - arr[x] == 1 && child[i]==0)����Ȼi��ֻ�ܷ���xһ���ӽڵ㣬���ǲ���ʱ�Ĺؼ����������x����i���ֽڵ㣬Ȼ��ȥ��dfs(x+1).
//3. ֱ��x=n������Ƿ�����arr[i]==1 && child[i] != 1��arr[i]=1��Ϊ���ֻʣ���Լ�û�����ȥ��
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
//	sort(arr, arr + n, greater<int>());	//�Ӵ�С����	������ͷ�ļ� #include<functional>��
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