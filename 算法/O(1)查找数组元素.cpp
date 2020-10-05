#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> nums;
unordered_map<int, int> map;


class solution {
public:
	solution() {}
	~solution() {}
	bool insert(int val) {
		if (map.count(val))	return false;
		map[val] = nums.size();
		nums.push_back(val);
		return true;
	}
	bool delete_(int val) {
		if (!map.count(val))	return false;
		int index = map[val];
		map[nums.size()] = index;
		swap(nums[index], nums.back());
		nums.pop_back();
		map.erase(val);
		return true;
	}
	int getnumber() {
		return nums[rand() % nums.size()];
	}
};


int main() {



	system("pause");
	return 0;
}