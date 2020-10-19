#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}	
};

ListNode* MeetingNode(ListNode* pHead) {
	if (pHead == nullptr)
		return nullptr;
	ListNode* slowNode = pHead->next;
	ListNode* fastNode = slowNode->next;
	while (fastNode->next != nullptr && slowNode->next != nullptr) {
		if (fastNode == slowNode)
			return fastNode;
		slowNode = slowNode->next;
		fastNode = fastNode->next;
		if (fastNode->next != nullptr) {
			fastNode = fastNode->next;
		}
	}
	return nullptr;
}

int main() {
	ListNode* meetnode=MeetingNode()


	return 0;
}