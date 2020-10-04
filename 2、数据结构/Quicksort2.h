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

//�Ż������ٲ���Ҫ�Ľ�������
int partition_2(int k[], int low, int high)
{
	int point;
	point = k[low];
	while (low < high)
	{
		while (low < high && k[high] >= point)//�Ƚ�k[high] �Ƿ���� point
		{
			high--;
		}
		k[low] = k[high];//��������㣬��ֱ�ӻ�

		while (low < high && k[low] <= point)//�Ƚ�k[low] �Ƿ�С�� point
		{
			low++;
		}
		k[high] = k[low];//��������㣬��ֱ�ӻ�
	}

	k[low] = point;
	return low;//�����м�ĵ�
}
void Qsort_2(int k[], int low, int high)
{
	int point;

	if (low < high)
	{
		point = partition_2(k, low, high);//���صõ��м����Ϊpoint
		Qsort_2(k, low, point - 1);//Ȼ���point����߽��еݹ����
		Qsort_2(k, point + 1, high);//Ȼ���point���ұ߽��еݹ����
	}
}

void Quicksort2(int k[], int n)
{
	Qsort_2(k, 0, n - 1);
}