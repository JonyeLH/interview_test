#pragma once
#pragma once
/*************************************************************************
���ֲ���Ҳ���۰���ң����ŵ����ٶȿ죬ȱ����Ҫ�����ݱ��������������С�
�ø���ֵk�����м���Ĺؼ��ֱȽϣ��м�������α�ֳ������ӱ����������ҳɹ���
������ȣ��ٸ���k����м���ؼ��ֵıȽϽ��ȷ����һ�������ĸ��ӱ������ݹ���У�ֱ�����ҵ�����ҽ������ֱ���û�������Ľ�㡣
ʱ�临�Ӷ�ΪO(log2n)
���ֲ��������ھ�̬���ң���������Ƶ�������ɾ�����������ݼ�
���ݼ�ʹ������洢������ʹ������
************************************************************************/

#include<stdio.h>
#include<iostream>
#include<time.h>
//ѭ����ʽ�Ķ��ֲ���
int binarySearchByLoop(int a[], int n, int key)
{
	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (a[mid] == key)
		{
			return mid;
		}
		else if (a[mid] < key)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}

//�ݹ���ʽ�Ķ��ֲ���
int binarySearch(int a[], int left, int right, int key)
{
	if (left > right)
		return -1;

	int mid = (left + right) / 2;
	if (a[mid] > key)
	{
		return binarySearch(a, left, mid - 1, key);
	}
	else if (a[mid] < key)
	{
		return binarySearch(a, mid + 1, right, key);
	}
	else
	{
		return mid;
	}
}