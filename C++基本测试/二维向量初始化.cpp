//#include <iostream>
//#include<vector>
//using namespace std;
///*
//输入：
//4 4
//1 2 3 4
//1 2 3 4
//2 3 2 1
//3 3 2 1
//
//输出：
//1 2 3 4
//1 2 3 4
//2 3 2 1
//3 3 2 1
//
//0 0 0 0
//0 0 0 0
//0 0 0 0
//0 0 0 0
//
//6 6 6 6
//6 6 6 6
//6 6 6 6
//6 6 6 6
//
//1 2 3 4
//1 2 3 4
//2 3 2 1
//3 3 2 1
//
//2 3
//2 3
//2 3
//2 3
//*/
//void show(vector<vector<int> > &v) {
//	for (int i = 0; i<(int)v.size(); i++) {
//		for (int j = 0; j<(int)v[0].size(); j++) {
//			cout << v[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	//二维vector初始化
//	vector< vector<int> > vt;//初始化一个 二维vector
//	int row, column, data;
//	cin >> row >> column;
//	for (int i = 0; i<row; i++) {
//		vector<int> tmp;//一维vector  tmp
//		for (int j = 0; j<column; j++) {
//			cin >> data;
//			tmp.push_back(data);
//		}
//		vt.push_back(tmp);//把一维 vector tmp 放进 二维vector vt
//	}
//	cout << endl;
//	vector<vector<int> > vect(vt);//使用另一个 二维 vector 初始化当前二维vector
//	vector< vector<int> > vec(row, vector<int>(column));//初始化一个 二维的vector 行row,列column,且值为0
//	vector<vector<int> > visited(row, vector<int>(column, 6));//初始化一个 二维vector 行row,列column ,且 值为data=6 自定义data;
//	vector<vector<int> > vecto(row, vector<int>(vt[0].begin() + 1, vt[0].begin() + 3));////初始化一个 二维vector 行row,第二个参数为一维vector;
//	show(vt);
//	show(vec);
//	show(visited);
//	show(vect);
//	show(vecto);
//	system("pause");
//	return 0;
//}
