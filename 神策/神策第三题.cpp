/*

求无序单链表的中位数

*/

#include <iostream>
#include <algorithm>
using namespace std;

// 链表节点定义
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}	
};

class Test {
	//【快慢指针————求一个有序链表的中位数】
public :
	static double sortedListMedian(ListNode* head) {
		if (head == NULL)
			cout<<"链表不能为空！";
		ListNode* slow = head, *fast = head;
		while (fast->next != NULL && fast->next->next != NULL) {
			slow = slow->next;
			fast = fast->next->next;
		}
		if (fast->next == NULL)       //说明链表有奇数个节点，此时slow正好是中位数
			return slow->val * 1.0;
		else                        //说明链表有偶数个节点，此时(slow+slow.next)/2是中位数
			return (slow->val + slow->next->val) / 2.0;
	}

	//返回由一个数组生成的链表的头结点
	static ListNode* makeListByArray(int array[]) {
		ListNode* dummyHead = new ListNode(-1);
		ListNode* cur = dummyHead;
		for (int i = 0; i < array.size(); i++) {
			cur->next = new ListNode(array[i]);
			cur = cur->next;
		}
		return dummyHead->next;
	}

}

//主函数
void main(String[] args) {
	int array[] = { 0,1,2,3,4,5 };
	ListNode head = makeListByArray(array);
	double ans = sortedListMedian(head);
	System.out.println(ans);
}