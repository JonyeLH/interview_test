//#include <iostream>
//#include<vector>
//using namespace std;
///*
//���룺
//4 4
//1 2 3 4
//1 2 3 4
//2 3 2 1
//3 3 2 1
//
//�����
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
//	//��άvector��ʼ��
//	vector< vector<int> > vt;//��ʼ��һ�� ��άvector
//	int row, column, data;
//	cin >> row >> column;
//	for (int i = 0; i<row; i++) {
//		vector<int> tmp;//һάvector  tmp
//		for (int j = 0; j<column; j++) {
//			cin >> data;
//			tmp.push_back(data);
//		}
//		vt.push_back(tmp);//��һά vector tmp �Ž� ��άvector vt
//	}
//	cout << endl;
//	vector<vector<int> > vect(vt);//ʹ����һ�� ��ά vector ��ʼ����ǰ��άvector
//	vector< vector<int> > vec(row, vector<int>(column));//��ʼ��һ�� ��ά��vector ��row,��column,��ֵΪ0
//	vector<vector<int> > visited(row, vector<int>(column, 6));//��ʼ��һ�� ��άvector ��row,��column ,�� ֵΪdata=6 �Զ���data;
//	vector<vector<int> > vecto(row, vector<int>(vt[0].begin() + 1, vt[0].begin() + 3));////��ʼ��һ�� ��άvector ��row,�ڶ�������Ϊһάvector;
//	show(vt);
//	show(vec);
//	show(visited);
//	show(vect);
//	show(vecto);
//	system("pause");
//	return 0;
//}
