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








//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	unordered_map<int, int> map;
//	while (n != NULL) {
//		cin >> n;
//		map[n]++;
//	}
//
//
//	//int n,temp;
//	//cin >> n;
//	//unordered_map<int, int> map;
//	//for (int i = 0; i < n; i++) {
//	//	cin >>temp;
//	//	map[temp]++;
//	//}
//
//	for (auto j : map) {
//		if (j.second == 1)
//			cout << j.first;
//	}
//
//	return 0;
//}