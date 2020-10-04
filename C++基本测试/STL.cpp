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
//	//	//cin >> temp;		//以输入变量的形式存入map中
//	//	//hash[i]=temp;
//
//	//	cin >> ans[i];	//还可以以向量的方式存储输入数据，并存入map中
//	//	hash[i] = ans[i];
//
//	//	//hash[temp]++;		//统计输入的value相同个数，seconde对应相同的个数，first对应下标
//
//
//	//	//hash.insert(make_pair(i, temp));	//insert插入key和value
//	//}
//
//	//unordered_map<int, int>::iterator pos = hash.begin();	//迭代器是指针，要对应一些指针的操作
//
//	//vector <int > nums;
//	//for (pos; pos != hash.end(); pos++) {
//
//	//	//统计重复个数
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
//	//	//cout << pos->first << " " << pos->second << endl;	//可在这输出map的key（first）和value（second）
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
//	////迭代器输出
//	//vector<int>::iterator it = nums.begin();
//	//for (it; it < nums.end(); it++) {
//	//	cout << *it << endl;
//	//}
//
//	////普通输出
//	//for (int j = 0; j < nums.size(); j++) {
//	//	cout << nums[j] << endl;
//	//}
//
//
//
//	////将map的数据赋给向量，通过向量输出map的key和value
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
//	// //查找
//	//时间复杂度：O(logN)----底层是搜索树
//	set<int>::iterator pos = s.find(3);
//	//时间复杂度：O(N)----需要遍历一遍（不建议使用）
//	//set<int>::iterator pos = find(s.begin(), s.end(), 3);
//	if (pos != s.end())
//	{
//		cout << "找到了" << endl;
//	}
//
//	// //删除
//	//s.erase(3);
//	s.erase(pos);//找到了我就删，没找到要删的话会报错
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//	// //遍历
//	//新式for循环
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//迭代器遍历
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
//	ss.swap(s);//交换根节点的指针，效率高
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//
//
//	s.clear();//清掉所有数据
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
//	for (auto e : ms)//可以重复插入相同key值
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	auto pos = ms.find(5);
//	if (pos != ms.end())
//	{
//		cout << "找到了" << endl;//找到的是中序的第一个5
//		while (*pos == 5)//往后继续找可以找到后面所有的5
//		{
//			cout << *pos << endl;
//			++pos;
//			if (pos == ms.end())//pos指向最后一个的下一个
//				break;
//		}
//	}
//
//	--pos;//倒数第一个5
//	ms.erase(pos);
//
//	for (auto e : ms)//可以重复插入相同key值
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
