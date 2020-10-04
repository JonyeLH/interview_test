/*
����������߼��ǣ���Ҫ��nums[lo..hi]����������������һ���ֽ��p��
ͨ������Ԫ��ʹ��nums[lo..p-1]��С�ڵ���nums[p]����nums[p+1..hi]������nums[p]��
Ȼ��ݹ��ȥnums[lo..p-1]��nums[p+1..hi]��Ѱ���µķֽ�㣬�����������ͱ������ˡ�
���������Ժ������ҵ��м�ֽ�ָ
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
		while (low < high && k[high] >= point)//�Ƚ�k[high] �Ƿ���� point
		{
			high--;
		}
		swap(k, low, high);//����whileѭ�������ʾ�������������������Ҫ����λ��

		while (low < high && k[low] <= point)//�Ƚ�k[low] �Ƿ�С�� point
		{
			low++;
		}
		swap(k, low, high);//����whileѭ�������ʾ�������������������Ҫ����λ��
	}
	return low;//�����м�ĵ�
}

//���ſ������Ϊ��������ǰ�����
void Qsort(int k[], int low, int high)
{
	int point;

	if (low < high)
	{
		point = partition(k, low, high);//���صõ��м����Ϊpoint
		Qsort(k, low, point - 1);//Ȼ���point����߽��еݹ����
		Qsort(k, point + 1, high);//Ȼ���point���ұ߽��еݹ����
	}
}

void Quicksort(int k[], int n)
{
	Qsort(k, 0, n - 1);
}



//�����ʵ��
void QuickSort(int k[], int start, int end)
{
	if (start >= end)
		return;
	int i = start;
	int j = end;
	// ��׼��������һ������Ϊ��׼
	int key = k[start];
	while (i < j)
	{
		// ���������ұȻ�׼��С����
		while (i < j && k[j] >= key)
		{
			j--;
		}
		if (i < j)	//����whileѭ�������ʾ����������������������ֺ������С�ڻ�׼��������Ҫ����λ��
		{
			k[i] = k[j];
			i++;
		}
		// ���������ұȻ�׼�������
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
	// �ѻ�׼���ŵ�i��λ��
	k[i] = key;
	// �ݹ�
	QuickSort(k, start, i - 1);
	QuickSort(k, i + 1, end);
}