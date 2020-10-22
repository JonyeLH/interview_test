/*
�趨һ��LRU���棬�����Ԫ������Ϊһ��key-value�ԣ�������������
1���򻺴��в���һ��key-value�ԣ�ʱ�临�Ӷ�O(1)
2������key�ӻ����в�ѯһ��Ԫ�ض�Ӧ��value��ʱ�临�Ӷ�O(1)
3�������СΪN��������ֻ�ܱ������N��key-value�ԣ����������ˣ�Ҫ�����µ�Ԫ�أ���ô������̭�������ʹ�õ�Ԫ�أ�Ȼ����в���

�û������ṩ�����ӿڣ�
1��void set(const std::string & key,const std::string &value)//����һ��key-value��
2��std::pair<bool,std::string> get(const std::string &key)//����key����һ��Ԫ�ض�Ӧ��value����������Ǿͷ���true��value�����򷵻�false�Ϳ�string
3��void get(std::vector<std::pair<string,string>> &all)	//����˳�򷵻ص�ǰ�����е�Ԫ��

����������
��һ��Ϊһ������N����ʾ����������С
�ӵ�2�п�ʼ��ÿ�б�ʾһ��set��get������
get�����ĸ�ʽΪ��get + �ո� + key
set�����ĸ�ʽΪ��set + �ո� + key + �ո� + value
���������
��˳���ӡ��ǰLUR��Ԫ��

����
���룺
3
get a
set a 1
get a
set b 2
set c 3
get a
set d 5
�����
d 5
a 1
c 3

*/


//#include <cstdio>
//#include <list>
//#include <unordered_map>
//
//using namespace std;
//
//class LRUCache {
//private:
//	size_t cap = 0;
//	list<pair<int, int>> cache;
//	unordered_map<int, list<pair<int, int>>::iterator> mp;
//public:
//	LRUCache(int capacity)
//		: cap(capacity) {}
//
//	// ����hash table�����У����Ƶ�ͷ������ɾ��ԭ��λ��Ԫ��
//	int get(int key)
//	{
//		auto it = mp.find(key);
//		if (it == mp.end()) return -1;
//
//		auto target_it = it->second;
//		pair<int, int> n{ target_it->first, target_it->second };
//		cache.push_front(n);
//		cache.erase(target_it);
//		mp.erase(key);
//		mp.emplace(key, cache.begin());
//
//		return n.second;
//	}
//
//	// ��ͨ����ϣ����cache���Ƿ��Ѵ�����ͬkey�� ����ɾ����������û�ж�Ҫ���� key �� value �Է���ͷ��, �糬���������ٵ���ĩβ
//	void put(int key, int value)
//	{
//		auto it = mp.find(key);
//		if (it != mp.end()) {
//			cache.erase(it->second);
//			mp.erase(key);
//		}
//
//		pair<int, int> n{ key, value };
//		cache.push_front(n);
//		mp.emplace(key, cache.begin());
//
//		if (cache.size() > cap) {
//			mp.erase(cache.back().first);
//			cache.pop_back();
//		}
//	}
//
//	void dump()
//	{
//		for (auto &&kv : cache) {
//			printf("%d:%d, ", kv.first, kv.second);
//		}
//		printf("mp size: %zu\n", mp.size());
//	}
//
//};