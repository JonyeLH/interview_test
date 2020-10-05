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
//	//二分查找
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
//	//斐波那契查找
//	int c[MAXSIZE] = { 1, 5, 15, 22, 25, 31, 39, 42, 47, 49, 59, 68, 88 };
//	int key;
//	int pos;
//
//	printf("二分查找-请输入要查找的数字:");
//
//	cin >> key;
//	//scanf("%d", &key);
//
//	pos = fibonacci_search(c, key, 13);
//
//	if (pos != -1)
//	{
//		printf("\n查找成功，关键字 %d 所在的位置是: %d\n\n", key, pos);
//	}
//	else
//	{
//		cout << "未在数组中找到元素:" << key ;
//	}
//	cout << endl;
//	cout << endl;
//
//
//
//	//哈希查找
//	int x, y, addr;
//	HashTable H;
//	int arr[HASHSIZE] = { NULL };
//
//	Init(&H);
//
//	printf("哈希查找-输入关键字集合:");
//	for (x = 0; x<HASHSIZE; x++)
//	{
//		scanf_s("%d", &arr[x]);
//		Insert(&H, arr[x]);
//	}
//	Result(&H);
//
//	printf("输入需要查找的元素：");
//	scanf_s("%d", &y);
//	addr = Search(&H, y);
//	if (addr == -1)
//		printf("元素不存在\n");
//	else
//		printf("%d元素在表中的位置是:%d\n", y, addr);
//	cout << endl;
//	cout << endl;
//
//
//
//
//	//插入查找
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int location;
//	int target = 4;
//	location = insertSearch(array, 9, target);
//	cout << "插入查找-元素在表中的位置是:" << location;
//	cout << endl;
//	cout << endl;
//
//
//
//
//	//顺序查找
//	int d[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int z = sq_search(d, 10, 8);
//	cout << "顺序查找-元素在表中的位置是:" << z;
//	cout << endl;
//	cout << endl;
//
//
//
//	//二叉树查找
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
