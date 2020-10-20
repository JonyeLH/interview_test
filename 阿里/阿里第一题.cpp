/*

ʵ��һ��˫�˶���
1 ��ʾͷ��		2 ��ʾβ��
3 ��ʾͷɾ		4 ��ʾβɾ

���룺
7		��ʾ�ж����������
2 3		β��3	[3]
1 3		ͷ��3	[3 3]
2 4		β��4	[3 3 4]
3		ͷɾ	[3 4]
3		ͷɾ	[4]
2 5		β��5	[4 5]
1 1		ͷ��1	[1 4 5]

����� 1 4 5
*/


#include <iostream>
#include <deque>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int N,op, temp;
	cin >> N;

	vector<pair<int, int>> res;
	unordered_map<int, int> map;

	for (int i = 0; i<N; i++) {
		cin >> op;
		if (op == 3 || op == 4) {
			res.emplace_back(op, INT32_MAX + 1);	//pair�ĵڶ������趨Ϊ�����ܵ�����int�����ֵ+1
			//map[op];
			continue;
		}	
		cin >> temp;	
		res.emplace_back(op, temp);
		//map[op] = temp;
	}

	deque<int> que;
	for (auto j : res) {
		if (j.first == 1)
			que.push_front(j.second);
		else if (j.first == 2) {
			que.push_back(j.second);
		}
		else if (j.first==3) {
			if (que.size() < 2)	return 0;	//�ж����˳�������ֻ��һ������������ɾ��
			que.pop_front();
		}
		else {
			if (que.size() < 2)	return 0;	//�ж����˳�������ֻ��һ������������ɾ��
			que.pop_back();
		}
	}
	// ��ӡ���
	int n = que.size();
	for (int z = 0; z < n; z++) {
		int top = que.front();
		que.pop_front();
		cout << top <<" ";
	}

	return 0;
}


// //vector ��pair�÷�
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(int argc, char** argv) {
//	vector<pair<int, int> > power;
//	power.emplace_back(make_pair(1, 1));	//ʹ��emplace_backѹ������
//	power.emplace_back(2, 2);
//	power.emplace_back(1, 1);
//
//	//�������
//	for (int i = 0; i<power.size(); i++) {
//		cout << power[i].first << "," << power[i].second << endl;
//	}
//
//	//ʹ�õ�����Ҳ���Ա������
//	vector<pair<int, int> > ::iterator iter; //����vector
//	for (iter = power.begin(); iter != power.end(); iter++)
//	{
//		cout << iter->first << "," << iter->second << endl;
//	}
//
//	return 0;
//}
