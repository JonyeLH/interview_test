/*
Leetcode 547
朋友圈：
班上有 N 名学生。其中有些人是朋友，有些则不是。他们的友谊具有是传递性。
如果已知 A 是 B 的朋友，B 是 C 的朋友，那么我们可以认为 A 也是 C 的朋友。所谓的朋友圈，是指所有朋友的集合。

给定一个 N * N 的矩阵 M，表示班级中学生之间的朋友关系。
如果M[i][j] = 1，表示已知第 i 个和 j 个学生互为朋友关系，否则为不知道。你必须输出所有学生中的已知的朋友圈总数。


输入：
[[1,1,0],
[1,1,0],
[0,0,1]]
输出：2
解释：已知学生 0 和学生 1 互为朋友，他们在一个朋友圈。
第2个学生自己在一个朋友圈。所以返回 2 。


*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*思路一：从图的角度进行思考，其实就是一个求解无向图中连通分量个数的问题*/
/*1.深度优先搜索*/
class Solution {
public:
	void DFS(vector<vector<int>>& M, vector<int> &visit, int n) {
		visit[n] = 1;
		for (int j = 0; j<M.size(); ++j)
			if (M[n][j] && !visit[j])
				DFS(M, visit, j);
	}
	int findCircleNum(vector<vector<int>>& M) {
		int N = M.size();
		vector<int> visit(M.size(), 0);
		int count = 0;
		for (int i = 0; i<N; ++i) {
			if (!visit[i]) {
				DFS(M, visit, i);
				count++;
			}
		}
		return count;
	}
};
/*2.广度优先搜索*/
class Solution {
public:
	int findCircleNum(vector<vector<int>>& M) {
		int N = M.size();
		vector<int> visit(N, 0);
		int count = 0, temp;
		queue<int> Que;
		for (int i = 0; i<N; ++i) {
			if (!visit[i]) {
				count++;
				Que.push(i);
				while (!Que.empty()) {
					temp = Que.front();
					Que.pop();
					visit[temp] = 1;
					for (int j = 0; j<N; ++j)
						if (M[temp][j] && !visit[j])
							Que.push(j);
				}
			}
		}
		return count;
	}
};
/*思路二：利用并查集的思想，并查集的思想；
并查集主要有两个操作，一个是find，一个是union；
find的作用是找到一个元素所在集合的代表元素，主要是一个递归的过程；
union的作用就是将两个元素分别所在的集合合并成一个集合，就是将其中一个元素的代表元素变成另一个元素的代表元素*/
class Solution {
public:
	int find(vector<int> &Vec, int n) {
		if (Vec[n] == -1)
			return n;
		return find(Vec, Vec[n]);
	}

	void Union(vector<int> &Vec, int m, int n) {
		int parent_m = find(Vec, m);
		int parent_n = find(Vec, n);
		if (parent_m != parent_n)
			Vec[parent_m] = parent_n;
	}

	int findCircleNum(vector<vector<int>>& M) {
		int N = M.size();
		vector<int> parent(N, -1);
		for (int i = 0; i<N; ++i) {
			for (int j = 0; j<N; ++j) {
				if (M[i][j] == 1 && i != j)
					Union(parent, i, j);
			}
		}
		int count = 0;
		for (int i = 0; i<N; ++i)
			if (parent[i] == -1)
				count++;
		return count;
	}
};

