#include <iostream>
#include <algorithm>
using namespace std;

class Node {
public:
	int key, val;
	Node* next;
	Node* pre;
	Node(int k,int v) {
		key = k;
		val = v;
	}
};



class DoubleList :public Node{
private:
	Node head, tail;
	int size;
public:
	DoubleList(){
		Node* head = new Node(0, 0);
		Node* tail = new Node(0, 0);
		head->next = tail;
		tail->pre = head;
		size = 0;
	}


};