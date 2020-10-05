#pragma once
#pragma once
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

//不符合定义的冒泡排序
void Bubblesort_error(int k[], int n)
{
	int i, j, temp, count1 = 0, count2 = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			count1++;
			if (k[i] > k[j])//第一个for循环的数与第二个for循环数比较大小，与冒泡排序定义不符。冒泡是要求两两比较,而这里是i 分别与 j 进行对比   交换的是 i 和 j
			{
				count2++;
				temp = k[j];
				k[j] = k[i];
				k[i] = temp;
			}
		}
	}
	//cout << "共执行了" << count1 << "次比较和" << count2 << "次移动" << endl;
}

//只记住这种！！！！正确的冒泡排序算法
void Bubblesort(int k[], int n)
{
	int i, j, temp, count1 = 0, count2 = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j >i; j--)//从后向前，这里是 j 和 j -1  进行比较和交换  是符合冒泡的定义，两两交换
		{
			count1++;
			if (k[j - 1] > k[j])
			{
				count2++;
				temp = k[j - 1];
				k[j - 1] = k[j];
				k[j] = temp;
			}
		}
	}
	//cout << "共执行了" << count1 << "次比较和" << count2 << "次移动" << endl;
}

//另外的方法
void Bubblesort_(int k[], int n)
{
	int count1 = 0, count2 = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			count1++;
			if (k[j] > k[j + 1]) {
				count2++;
				int temp = k[j + 1];
				k[j + 1] = k[j];
				k[j] = temp;
			}
		}
	}
	//cout << "共执行了" << count1 << "次比较和" << count2 << "次移动" << endl;
}
////冒泡排序的改进,对于局部无序，大致有序，减少不必要的移动操作			待仔细研究
//void Bubblesort_modify(int k[], int n)
//{
//	int i, j, temp, flag = 1, count1 = 0, count2 = 0;
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = n - 1; j > i; j--)
//		{
//			count1++;
//			flag = 0;
//			if (k[j - 1] > k[j])
//			{
//				count2++;
//				temp = k[j - 1];
//				k[j - 1] = k[j];
//				k[j] = temp;
//				flag = 1;
//			}
//		}
//	}
//	cout << "共执行了" << count1 << "次比较和" << count2 << "次移动" << endl;
//}