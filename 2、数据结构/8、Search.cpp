//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <time.h>
//#include "binary_Search.h"
//#include "Febi_search.h"
//#include "HashTable.h"
//#include "Insert_search.h"
//#include "Sq_search.h"
//#include "BST_search.h"
//
//
//using namespace std;
//
//int main()
//{
//	//���ֲ���
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int j = binarySearchByLoop(a, 10, 6);
//	printf("%d\n", j);
//
//	int i = binarySearch(a, 0, 9, 9);
//	printf("%d\n", i);
//
//	cout << endl;
//	cout << endl;
//
//
//
//	//쳲���������
//	int c[MAXSIZE] = { 1, 5, 15, 22, 25, 31, 39, 42, 47, 49, 59, 68, 88 };
//	int key;
//	int pos;
//
//	printf("���ֲ���-������Ҫ���ҵ�����:");
//
//	cin >> key;
//	//scanf("%d", &key);
//
//	pos = fibonacci_search(c, key, 13);
//
//	if (pos != -1)
//	{
//		printf("\n���ҳɹ����ؼ��� %d ���ڵ�λ����: %d\n\n", key, pos);
//	}
//	else
//	{
//		cout << "δ���������ҵ�Ԫ��:" << key ;
//	}
//	cout << endl;
//	cout << endl;
//
//
//
//	//��ϣ����
//	int x, y, addr;
//	HashTable H;
//	int arr[HASHSIZE] = { NULL };
//
//	Init(&H);
//
//	printf("��ϣ����-����ؼ��ּ���:");
//	for (x = 0; x<HASHSIZE; x++)
//	{
//		scanf_s("%d", &arr[x]);
//		Insert(&H, arr[x]);
//	}
//	Result(&H);
//
//	printf("������Ҫ���ҵ�Ԫ�أ�");
//	scanf_s("%d", &y);
//	addr = Search(&H, y);
//	if (addr == -1)
//		printf("Ԫ�ز�����\n");
//	else
//		printf("%dԪ���ڱ��е�λ����:%d\n", y, addr);
//	cout << endl;
//	cout << endl;
//
//
//
//
//	//�������
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int location;
//	int target = 4;
//	location = insertSearch(array, 9, target);
//	cout << "�������-Ԫ���ڱ��е�λ����:" << location;
//	cout << endl;
//	cout << endl;
//
//
//
//
//	//˳�����
//	int d[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int z = sq_search(d, 10, 8);
//	cout << "˳�����-Ԫ���ڱ��е�λ����:" << z;
//	cout << endl;
//	cout << endl;
//
//
//
//	//����������
//	BiTreeNode *root;
//	int f;
//
//	root = NULL;
//	int data[N] = { 10, 23, 11, 98, 111, 87, 34, 11, 33, 8 };
//	for (f = 0; f< N; f++) {
//		insertNode(&root, data[f]);
//	}
//	printf("before delete:\n");
//	inorderTraversal(&root, printNode);
//	printf("\n");
//	deleteNode(&root, 11);
//	deleteNode(&root, 8);
//	printf("after delete:\n");
//	inorderTraversal(&root, printNode);
//	printf("\n");
//
//
//	system("pause");
//	return 0;
//}
