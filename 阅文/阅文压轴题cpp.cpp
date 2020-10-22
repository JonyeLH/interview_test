/*
设定一个LRU缓存，缓存的元素类型为一个key-value对，满足以下条件
1、向缓存中插入一个key-value对，时间复杂度O(1)
2、按照key从缓存中查询一个元素对应的value，时间复杂度O(1)
3、缓存大小为N，即缓存只能保留最多N个key-value对，当缓存满了，要插入新的元素，那么先手淘汰最近最少使用的元素，然后进行插入

该缓存它提供三个接口：
1、void set(const std::string & key,const std::string &value)//插入一个key-value对
2、std::pair<bool,std::string> get(const std::string &key)//按照key查找一个元素对应的value，如果存在那就返回true和value，否则返回false和空string
3、void get(std::vector<std::pair<string,string>> &all)	//按照顺序返回当前缓存中的元素

输入描述：
第一行为一个整数N，表示缓存容量大小
从第2行开始，每行表示一个set和get操作：
get操作的格式为：get + 空格 + key
set操作的格式为：set + 空格 + key + 空格 + value
输出描述：
按顺序打印当前LUR中元素

例：
输入：
3
get a
set a 1
get a
set b 2
set c 3
get a
set d 5
输出：
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
//	// 先找hash table，如有，复制到头部，再删除原有位置元素
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
//	// 先通过哈希表检查cache里是否已存在相同key， 有则删除，不管有没有都要把新 key 和 value 对放至头部, 如超出容量则再弹出末尾
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