//#include <iostream>
//#include <unordered_map>
//#include <map>
//#include <vector>
//#include <deque>
//#include <set>
//#include <algorithm>
//#include<functional>
//using namespace std;
//
//int main() {
//
//	////////////////////  unordered_map ///////////////////
//	//int n,temp;
//	//cin >> n;
//	//vector<int> ans(n);
//	//unordered_map<int, int> hash;
//	//for (int i = 0; i < n; i++) {
//	//	//cin >> temp;		//�������������ʽ����map��
//	//	//hash[i]=temp;
//
//	//	cin >> ans[i];	//�������������ķ�ʽ�洢�������ݣ�������map��
//	//	hash[i] = ans[i];
//
//	//	//hash[temp]++;		//ͳ�������value��ͬ������seconde��Ӧ��ͬ�ĸ�����first��Ӧ�±�
//
//
//	//	//hash.insert(make_pair(i, temp));	//insert����key��value
//	//}
//
//	//unordered_map<int, int>::iterator pos = hash.begin();	//��������ָ�룬Ҫ��ӦһЩָ��Ĳ���
//
//	//vector <int > nums;
//	//for (pos; pos != hash.end(); pos++) {
//
//	//	//ͳ���ظ�����
//	//	//if (pos->second == 3) {
//	//	//	nums.push_back(pos->first);
//	//	//}
//
//	//	//count()
//	//	//if (hash.count(2) == 2)
//	//	//	cout << "True";
//	//	//else
//	//	//	cout << "No";
//
//	//	//cout << pos->first << " " << pos->second << endl;	//���������map��key��first����value��second��
//	//	cout << (*pos).first << " " << (*pos).second << endl;
//	//}
//
//
//	////find()
//	//unordered_map<int, int>::iterator it_find= hash.find(6);
//	//if ((it_find) != hash.end()) {
//	//	it_find->second = 20;
//	//}
//	//else {
//	//	printf("no!\n");
//	//}
//	//cout << it_find->first << " " << it_find->second << endl;
//
//
//	////���������
//	//vector<int>::iterator it = nums.begin();
//	//for (it; it < nums.end(); it++) {
//	//	cout << *it << endl;
//	//}
//
//	////��ͨ���
//	//for (int j = 0; j < nums.size(); j++) {
//	//	cout << nums[j] << endl;
//	//}
//
//
//
//	////��map�����ݸ���������ͨ���������map��key��value
//	//vector<pair<int, int>> v;
//
//	//for (pos; pos != hash.end(); pos++) {
//	//	v.push_back(*pos);		
//	//}
//	//for (int j = 0; j < v.size(); j++) {
//	//	cout << v[j].first << " " << v[j].second << endl;
//	//}
//
//	
//
//
//
//	///////////////////  set  ///////////////////
//	set<int> s;
//	s.insert(2);
//	s.insert(1);
//	s.insert(4);
//	s.insert(5);
//	s.insert(3);
//	s.insert(5);
//	s.insert(5);
//	s.insert(5);
//	s.insert(5);
//	s.insert(5);
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	// //����
//	//ʱ�临�Ӷȣ�O(logN)----�ײ���������
//	set<int>::iterator pos = s.find(3);
//	//ʱ�临�Ӷȣ�O(N)----��Ҫ����һ�飨������ʹ�ã�
//	//set<int>::iterator pos = find(s.begin(), s.end(), 3);
//	if (pos != s.end())
//	{
//		cout << "�ҵ���" << endl;
//	}
//
//	// //ɾ��
//	//s.erase(3);
//	s.erase(pos);//�ҵ����Ҿ�ɾ��û�ҵ�Ҫɾ�Ļ��ᱨ��
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//	// //����
//	//��ʽforѭ��
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//����������
//	set<int>::iterator sit = s.begin();
//	while (sit != s.end())
//	{
//		cout << *sit << " ";
//		sit++;
//	}
//	cout << endl;
//
//
//
//	//	//swap
//	set<int> ss;
//	ss.insert(6);
//	ss.insert(9);
//	ss.insert(8);
//	ss.insert(7);
//	ss.insert(10);
//
//	ss.swap(s);//�������ڵ��ָ�룬Ч�ʸ�
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//
//	s.clear();//�����������
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//
//
//
//
//
//	///////////////////  multiset  ///////////////////
//	multiset<int> ms;
//	ms.insert(2);
//	ms.insert(1);
//	ms.insert(4);
//	ms.insert(5);
//	ms.insert(3);
//	ms.insert(5);
//	ms.insert(5);
//	ms.insert(5);
//	ms.insert(5);
//	ms.insert(5);
//
//	for (auto e : ms)//�����ظ�������ͬkeyֵ
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	auto pos = ms.find(5);
//	if (pos != ms.end())
//	{
//		cout << "�ҵ���" << endl;//�ҵ���������ĵ�һ��5
//		while (*pos == 5)//��������ҿ����ҵ��������е�5
//		{
//			cout << *pos << endl;
//			++pos;
//			if (pos == ms.end())//posָ�����һ������һ��
//				break;
//		}
//	}
//
//	--pos;//������һ��5
//	ms.erase(pos);
//
//	for (auto e : ms)//�����ظ�������ͬkeyֵ
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//
//	system("pause");
//	return 0;
//}
//
//
