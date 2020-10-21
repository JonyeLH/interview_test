/*

�������������λ��

*/

#include <iostream>
#include <algorithm>
using namespace std;

// ����ڵ㶨��
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}	
};

class Test {
	//������ָ�롪��������һ�������������λ����
public :
	static double sortedListMedian(ListNode* head) {
		if (head == NULL)
			cout<<"������Ϊ�գ�";
		ListNode* slow = head, *fast = head;
		while (fast->next != NULL && fast->next->next != NULL) {
			slow = slow->next;
			fast = fast->next->next;
		}
		if (fast->next == NULL)       //˵���������������ڵ㣬��ʱslow��������λ��
			return slow->val * 1.0;
		else                        //˵��������ż�����ڵ㣬��ʱ(slow+slow.next)/2����λ��
			return (slow->val + slow->next->val) / 2.0;
	}

	//������һ���������ɵ������ͷ���
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

//������
void main(String[] args) {
	int array[] = { 0,1,2,3,4,5 };
	ListNode head = makeListByArray(array);
	double ans = sortedListMedian(head);
	System.out.println(ans);
}