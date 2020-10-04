#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	//ListNode(int x) : val(x), next(NULL)	//构造函数初始化列表
	//{
	//
	//}
};

ListNode* CreateListNode(int value)
{
	ListNode* pNode = new ListNode();
	pNode->val = value;
	pNode->next = nullptr;

	return pNode;
}

void ConnectListNodes(ListNode* pCurrent, ListNode* pNext)
{
	if (pCurrent == nullptr)
	{
		printf("Error to connect two nodes.\n");
		exit(1);
	}

	pCurrent->next = pNext;
}

int main() {
	int n, temp;
	cin >> n;
	ListNode* head = new ListNode();
	vector<int > nums;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		nums.push_back(temp);
		ListNode* pNode = CreateListNode(temp);
		ConnectListNodes(head, pNode);
		head = pNode;
	}

	for (int j = 0; j < n; j++) {
		cout << nums[j];
	}

	stack<int> stk;



	system("pause");
	return 0;
}