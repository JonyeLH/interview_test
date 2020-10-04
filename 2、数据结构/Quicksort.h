/*
快速排序的逻辑是，若要对nums[lo..hi]进行排序，我们先找一个分界点p，
通过交换元素使得nums[lo..p-1]都小于等于nums[p]，且nums[p+1..hi]都大于nums[p]，
然后递归地去nums[lo..p-1]和nums[p+1..hi]中寻找新的分界点，最后整个数组就被排序了。
！！！所以核心是找到中间分界指
*/
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

int partition(int k[], int low, int high)
{
	int point;
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

//快排可以理解为二叉树的前序遍历
void Qsort(int k[], int low, int high)
{
	int point;

	if (low < high)
	{
		point = partition(k, low, high);//返回得到中间点作为point
		Qsort(k, low, point - 1);//然后对point的左边进行递归调用
		Qsort(k, point + 1, high);//然后对point的右边进行递归调用
	}
}

void Quicksort(int k[], int n)
{
	Qsort(k, 0, n - 1);
}



//另外的实现
void QuickSort(int k[], int start, int end)
{
	if (start >= end)
		return;
	int i = start;
	int j = end;
	// 基准数，将第一个数作为基准
	int key = k[start];
	while (i < j)
	{
		// 从右向左找比基准数小的数
		while (i < j && k[j] >= key)
		{
			j--;
		}
		if (i < j)	//出了while循环，则表示不满足上面的条件，即出现后面的数小于基准数，则需要调换位置
		{
			k[i] = k[j];
			i++;
		}
		// 从左向右找比基准数大的数
		while (i < j && k[i] < key)
		{
			i++;
		}
		if (i < j)
		{
			k[j] = k[i];
			j--;
		}
	}
	// 把基准数放到i的位置
	k[i] = key;
	// 递归
	QuickSort(k, start, i - 1);
	QuickSort(k, i + 1, end);
}