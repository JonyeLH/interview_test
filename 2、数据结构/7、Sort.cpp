//#include <iostream>
//#include <algorithm>
//#include <string>
//#include "Bubblesort.h"
//#include  "Heapsort.h"
//#include "Insertsort.h"
//#include "Mergesort.h"
//#include "Quicksort.h"
//#include "Quicksort1.h"
//#include "Quicksort2.h"
//#include "Quicksort3.h"
//#include "Quicksort4.h"
//#include "Seletesort.h"
//#include "Shellsort.h"
//
//using namespace std;
//
//int main() {
//	//冒泡排序	O(n^2)	稳定算法
//	int i, a[10] = { 1, 0, 2 ,3 ,4 ,5 ,6, 7 ,8 ,9 };
//	Bubblesort(a, 10);
//	//Bubblesort_error(a, 10);		//错误的排序
//	//Bubblesort_(a, 10);		//另外的方法
//
//	cout << "冒泡输出结果是：";
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i];
//	}
//	cout << endl;
//	cout << endl;
//
//
//
//
//	//选择排序	O(n^2)	数组不稳定、链表稳定
//	//选出最小的数放在起始位置，每次遍历后面的数，找出次小的数放在已排序序列后面
//	int z, e[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Seletesort(e, 10);
//
//	cout << "选择排序输出结果是：";
//	for (z = 0; z < 10; z++)
//	{
//		cout << e[z];
//	}
//	cout << endl;
//	cout << endl;
//
//
//
//
//	//插入排序	O(n^2)	稳定算法
//	//从第一个元素开始，视其为已排序。遍历下一个的元素与前面已排序的序列从后向前进行比较，插入到合适的位置
//	int x, c[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Insertesort(c, 10);
//
//	cout << "插入排序输出结果是：";
//	for (x = 0; x < 10; x++)
//	{
//		cout << c[x];
//	}
//	cout << endl;
//	cout << endl;
//
//
//
//
//	//希尔排序
//	int u, f[10] = { 5,2,6,0,3,9,1,7,4,8 };
//
//	Shellsort(f, 10);
//
//	cout << "希尔排序输出结果是：";
//	for (z = 0; z < 10; z++)
//	{
//		cout << f[z];
//	}
//	cout << endl;
//	cout << endl;
//
//
//
//
//	//快速排序
//	int v, g[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Quicksort(g, 10);
//
//	cout << "原始快速输出结果是：";
//	for (v = 0; v < 10; v++)
//	{
//		cout << g[v];
//	}
//	cout << endl;
//	cout << endl;
//
//
//	//快速排序优化1
//	int r, h[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Quicksort1(h, 10);
//
//	cout << "快速排序优化1输出结果是：";
//	for (r = 0; r < 10; r++)
//	{
//		cout << h[r];
//	}
//	cout << endl;
//	cout << endl;
//
//
//	//快速排序优化2
//	int p, s[10] = { 5,2,6,0,3,9,1,7,4,8 };
//
//	Quicksort2(s, 10);
//
//	cout << "快速排序优化2输出结果是：";
//	for (p = 0; p < 10; p++)
//	{
//		cout << s[p];
//	}
//	cout << endl;
//	cout << endl;
//
//
//	//快速排序优化3
//	int q, m[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Quicksort3(m, 10);
//
//	cout << "快速排序优化3输出结果是：";
//	for (q = 0; q < 10; q++)
//	{
//		cout << m[q];
//	}
//	cout << endl;
//	cout << endl;
//
//
//	//快速排序优化4
//	int n, l[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Quicksort4(l, 10);
//
//	cout << "快速排序优化4输出结果是：";
//	for (n = 0; n < 10; n++)
//	{
//		cout << l[n];
//	}
//	cout << endl;
//
//
//
//
//
//	//堆排序
//	int j, b[10] = { -1,5,2,6,0,3,9,1,7,4 };
//	Heapsort(b, 9);
//
//	cout << "堆输出结果是：";
//	for (j = 0; j < 10; j++)
//	{
//		cout << b[j];
//	}
//	cout << endl;
//	cout << endl;
//
//
//
//
//
//	//归并排序递归实现
//	int y, d[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Mergesort(d, 10);
//
//	//迭代实现
//	//Mergesort_loop(d, 10);	//有问题
//
//	cout << "归并排序输出结果是：";
//	for (y = 0; y < 10; y++)
//	{
//		cout << d[y];
//	}
//	cout << endl;
//	cout << endl;
//
//
//	system("pause");
//	return 0;
//}
//
