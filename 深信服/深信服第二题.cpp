////���ŷ��ڶ���
///*
//����һ��n���������飬����m��ѯ�ʣ�ÿ��ѯ��Ϊһ������[l��r]��������������l-r�����ж��ٸ�����n������������һ������Լ��
//����8 9 20
//����[1,5]
//1����������Լ��
//2��8��20��Լ��
//3��9��Լ��
//4��8��20��Լ��
//5��20��Լ��
//���Դ����5
//*/
//
////#include "bits/stdc++.h"	//����ͷ�ļ�
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//
////�������ᳬʱ��
//int main() {
//	vector<int> nums;
//	queue<int> qujian;
//	int n, m, temp, l, r;
//	cin >> n >> m;
//	for (int i = 0; i< n; i++) {
//		cin >> temp;
//		nums.push_back(temp);
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> l >> r;
//		qujian.push(l);
//		qujian.push(r);
//	}
//	while(m){
//		int cnt = 0;
//		int left = qujian.front();
//		qujian.pop();
//		int right = qujian.front();
//		qujian.pop();
//		for (int i = left; i <= right; i++) {
//			int pos = 0;
//			for (int j = 0; j < nums.size(); j++) {
//				if (nums[j] % i == 0) {
//					pos = 1;
//					break;
//				}
//			}
//			cnt += pos;
//		}
//		cout << cnt << endl;
//		m--;
//	}
//	system("pause");
//	return 0;
//}
