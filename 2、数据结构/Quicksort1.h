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

//�Ż�����ֹ���õĵ�һ��pointֵ����ȡ�м�ֵm��Ϊpoint
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
void Qsort_1(int k[], int low, int high)
{
	int point;

	if (low < high)
	{
		point = partition_1(k, low, high);//���صõ��м����Ϊpoint
		Qsort_1(k, low, point - 1);//Ȼ���point����߽��еݹ����
		Qsort_1(k, point + 1, high);//Ȼ���point���ұ߽��еݹ����
	}
}

void Quicksort1(int k[], int n)
{
	Qsort_1(k, 0, n - 1);
}