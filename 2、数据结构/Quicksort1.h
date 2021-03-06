#pragma once
#pragma once
#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

//void swap(int k[], int low, int high)
//{
//	int temp;
//	temp = k[low];
//	k[low] = k[high];
//	k[high] = temp;
//}

//优化，防止设置的第一个point值过大，取中间值m作为point
int partition_1(int k[], int low, int high)
{
	int point;

	int m = low + (high - low) / 2;
	if (k[low] > k[high])
	{
		swap(k, low, high);
	}
	if (k[m] > k[high])
	{
		swap(k, m, high);
	}
	if (k[m] > k[low])
	{
		swap(k, m, low);
	}

	point = k[low];
	while (low < high)
	{
		while (low < high && k[high] >= point)//比较k[high] 是否大于 point
		{
			high--;
		}
		swap(k, low, high);//出了while循环，则表示不满足上面的条件，需要调换位置

		while (low < high && k[low] <= point)//比较k[low] 是否小于 point
		{
			low++;
		}
		swap(k, low, high);//出了while循环，则表示不满足上面的条件，需要调换位置
	}
	return low;//返回中间的点
}
void Qsort_1(int k[], int low, int high)
{
	int point;

	if (low < high)
	{
		point = partition_1(k, low, high);//返回得到中间点作为point
		Qsort_1(k, low, point - 1);//然后对point的左边进行递归调用
		Qsort_1(k, point + 1, high);//然后对point的右边进行递归调用
	}
}

void Quicksort1(int k[], int n)
{
	Qsort_1(k, 0, n - 1);
}