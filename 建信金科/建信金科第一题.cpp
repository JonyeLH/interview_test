///*
//
//Ѱ��Ψһ�صȽ���
//
//��˾���ĳ齱�������һ���صȽ������������˽����ڱ��������½���������������ƺ����ҳ�Ψһ���صȽ�
//���룺 [1,2,3,2,3]
//����� 1
//
//*/
//
//#include<iostream>
//#include <unordered_map>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n,temp;
//	cin >> n;
//
//	//����ҳ�е�����д��
//	//while (n != NULL) {
//	//	cin >> n;
//	//}
//
//	unordered_map <int, int> nums(n);
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		nums[temp]++;
//	}
//	vector<int> res;
//	for(auto j :nums) {
//		if (j.second == 1)
//			res.push_back(j.first);
//			//cout << j.first;	//���ֻ��һ��Ψһ����ֱ�����
//	}
//
//	//�Է����ֶ��ֻ��һ��������������һ�����
//	int number = res.size()-1;
//	cout << res[number];
//
//	return 0;
//}