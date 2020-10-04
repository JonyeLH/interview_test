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

void Isort_2(int k[], int n)
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

void Insertsort_2(int k[], int low, int high)
{
	Isort_2(k + low, high - low + 1);
}

int partition_4(int k[], int low, int high)
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

//�Ż��ģ����Ż����Ļ����ϼ��ٵݹ������β�ݹ飩
void Qsort_4(int k[], int low, int high)
{
	int point;

	if ((high - low)> MAX_LENGTH_INSERT_SORT)
	{
		while (low < high)
		{
			point = partition_4(k, low, high);//���صõ��м����Ϊpoint
			if (point - low < high - point)
			{
				Qsort_4(k, low, point - 1);//Ȼ���point����߽��еݹ����
				low = point + 1;
			}
			else
			{
				Qsort_4(k, point + 1, high);//Ȼ���point����߽��еݹ����
				high = point - 1;
			}
		}
	}
	else//����ʹ�ò�������
	{
		Insertsort_2(k, low, high);
	}
}

void Quicksort4(int k[], int n)
{
	Qsort_4(k, 0, n - 1);
}
#pragma once
