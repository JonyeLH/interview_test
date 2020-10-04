#pragma once
#include<iostream>
#include<math.h>
#include<algorithm>
#define MAX_LENGTH_INSERT_SORT 7	//�趨���ٽ�ֵ������������������ֵ����ʹ�ÿ������򣬷���ʹ�ò�������

using namespace std;

//void swap(int k[], int low, int high)
//{
//	int temp;
//	temp = k[low];
//	k[low] = k[high];
//	k[high] = temp;
//}

void Isort(int k[], int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		if (k[i] < k[i - 1])
		{
			temp = k[i];

			for (j = i - 1; k[j] > temp; j--)
			{
				k[j + 1] = k[j];
			}
			k[j + 1] = temp;
		}
	}
}

void Insertsort(int k[], int low, int high)
{
	Isort(k + low, high - low + 1);
}

int partition_3(int k[], int low, int high)
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

void Qsort_3(int k[], int low, int high)
{
	int point;

	if ((high - low)> MAX_LENGTH_INSERT_SORT)//�������������7����ʹ�ÿ�������
	{
		point = partition_3(k, low, high);//���صõ��м����Ϊpoint
		Qsort_3(k, low, point - 1);//Ȼ���point����߽��еݹ����
		Qsort_3(k, point + 1, high);//Ȼ���point���ұ߽��еݹ����
	}
	else//����ʹ�ò�������
	{
		Insertsort(k, low, high);
	}
}

void Quicksort3(int k[], int n)
{
	Qsort_3(k, 0, n - 1);
	//cout << "�������ǣ�";
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << k[i];
	//}
}

