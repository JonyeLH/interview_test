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
//	//ð������	O(n^2)	�ȶ��㷨
//	int i, a[10] = { 1, 0, 2 ,3 ,4 ,5 ,6, 7 ,8 ,9 };
//	Bubblesort(a, 10);
//	//Bubblesort_error(a, 10);		//���������
//	//Bubblesort_(a, 10);		//����ķ���
//
//	cout << "ð���������ǣ�";
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
//	//ѡ������	O(n^2)	���鲻�ȶ��������ȶ�
//	//ѡ����С����������ʼλ�ã�ÿ�α�������������ҳ���С�����������������к���
//	int z, e[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Seletesort(e, 10);
//
//	cout << "ѡ�������������ǣ�";
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
//	//��������	O(n^2)	�ȶ��㷨
//	//�ӵ�һ��Ԫ�ؿ�ʼ������Ϊ�����򡣱�����һ����Ԫ����ǰ������������дӺ���ǰ���бȽϣ����뵽���ʵ�λ��
//	int x, c[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Insertesort(c, 10);
//
//	cout << "���������������ǣ�";
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
//	//ϣ������
//	int u, f[10] = { 5,2,6,0,3,9,1,7,4,8 };
//
//	Shellsort(f, 10);
//
//	cout << "ϣ�������������ǣ�";
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
//	//��������
//	int v, g[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Quicksort(g, 10);
//
//	cout << "ԭʼ�����������ǣ�";
//	for (v = 0; v < 10; v++)
//	{
//		cout << g[v];
//	}
//	cout << endl;
//	cout << endl;
//
//
//	//���������Ż�1
//	int r, h[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Quicksort1(h, 10);
//
//	cout << "���������Ż�1�������ǣ�";
//	for (r = 0; r < 10; r++)
//	{
//		cout << h[r];
//	}
//	cout << endl;
//	cout << endl;
//
//
//	//���������Ż�2
//	int p, s[10] = { 5,2,6,0,3,9,1,7,4,8 };
//
//	Quicksort2(s, 10);
//
//	cout << "���������Ż�2�������ǣ�";
//	for (p = 0; p < 10; p++)
//	{
//		cout << s[p];
//	}
//	cout << endl;
//	cout << endl;
//
//
//	//���������Ż�3
//	int q, m[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Quicksort3(m, 10);
//
//	cout << "���������Ż�3�������ǣ�";
//	for (q = 0; q < 10; q++)
//	{
//		cout << m[q];
//	}
//	cout << endl;
//	cout << endl;
//
//
//	//���������Ż�4
//	int n, l[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Quicksort4(l, 10);
//
//	cout << "���������Ż�4�������ǣ�";
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
//	//������
//	int j, b[10] = { -1,5,2,6,0,3,9,1,7,4 };
//	Heapsort(b, 9);
//
//	cout << "���������ǣ�";
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
//	//�鲢����ݹ�ʵ��
//	int y, d[10] = { 5,2,6,0,3,9,1,7,4,8 };
//	Mergesort(d, 10);
//
//	//����ʵ��
//	//Mergesort_loop(d, 10);	//������
//
//	cout << "�鲢�����������ǣ�";
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
