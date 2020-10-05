//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//stack<int> stk1,stk2;
//vector<int> nums;
//void addtail(int val) {
//	stk1.push(val);
//	cout << "add_successful" << endl;
//}
//
//int dedale_front(stack<int> stk) {
//	if (stk2.size() <= 0) {
//		while (!stk.empty()) {
//			stk2.push(stk.top());
//			stk.pop();
//		}
//	}
//	if (stk2.size() == 0)
//		throw new exception("queue is empty");
//	else {
//		int temp = stk2.top();
//		stk2.pop();
//		cout << "delete_successful" << endl;
//		return temp;
//	}
//}
//
//void show_data(stack<int> stk) {
//	int temp;
//	while (!stk.empty()) {
//		temp = stk.top();
//		nums.push_back(temp);
//		stk.pop();
//	}
//	int n = nums.size()-1;
//
//	for (int k = 0; k <= n; k++) {
//		cout << nums[k]<<" ";
//	}
//	cout << endl;
//}
//
//int main() {
//	int n,temp;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		stk1.push(temp);
//	}
//
//	int val;
//	cin >> val;
//	addtail(val);
//	show_data(stk1);
//	nums.clear();
//
//	dedale_front(stk1);
//	show_data(stk2);
//
//	system("pause");
//	return 0;
//}