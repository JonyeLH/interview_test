//˼·��ͳ���������ֳ��ֵĴ��������������ľ�˵���ٵ�
/*
һƬN*N��ɭ�֣�N*N��������Ϊ��֤�û���Ա��ÿ��ÿ�ж��ܿ������е���
ɭ���е���ÿ�д����Ҹ߶ȵ�����ÿ�д��ϵ��µ�������ͬ�в�ͬ�в����ܴ��ڸ߶���ͬ������
����Ա���¼ÿ��ÿ�����ĸ߶ȹ�Ϊ2N����¼
���磺ɭ��N=3
1 2 3
2 3 4
3 5 6
��ɼ�¼��
1 2 3
2 3 4
3 5 6
1 2 3
2 3 5 
3 4 6
���ڻ���Ա��ʧ��һ�ż�¼�����ҳ����ż�¼


input
3
3 8 12
9 13 20
3 6 9
8 10 13
12 17 20

output
6 10 17
*/
//#include "bits/stdc++.h"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace  std;
int a[20008];

int main() {
	vector<int> res;
	unordered_map<int, int> map;
	int N;
	cin >> N;
	int m = (2 * N - 1) * N;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
		map[a[i]]++;
	}
	for (auto i : map) {
		if (i.second % 2 == 1)
			res.push_back(i.first);
	}

	sort(res.begin(), res.end());
	for (int j = 0; j < res.size(); j++) {
		cout << res[j] << " ";
	}
	cout << endl ;

	system("pause");
	return 0;
}



