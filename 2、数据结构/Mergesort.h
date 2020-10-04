#pragma once
#pragma once
#include<iostream>
#include<math.h>
#include<algorithm>

#define MAXSIZE 10
using namespace std;

//�鲢����ĵݹ�ʵ��
void Merging(int *list1, int list1_size, int *list2, int list2_size)
{
	int i, j, k, m;//����i��j�ֱ�����list1��list2������ı�����k������ʱ����Ĵ洢��m�������ϲ�����Ĵ洢
	i = j = k = 0;
	int temp[MAXSIZE];

	while (i < list1_size && j < list2_size)//�ڷ�Χ��
	{
		if (list1[i] < list2[j])//��list1����С��list2����
		{
			temp[k++] = list1[i++];//��list1�����������ʱ������
		}
		else//��֮��Ȼ
		{
			temp[k++] = list2[j++];
		}
	}

	while (i < list1_size)//�Ƚ���֮����list1���������ڣ���һ���ǽϴ���
	{
		temp[k++] = list1[i++];
	}
	while (j < list2_size)//ͬ���Ƚ���֮����list2���������ڣ���һ���ǽϴ���
	{
		temp[k++] = list2[j++];
	}

	for (m = 0; m < (list1_size + list2_size); m++)//�����ɽ�������ʱ��������ݴ����list1��
	{
		list1[m] = temp[m];
	}
}

void Mergesort(int k[], int n)
{
	if (n > 1)
	{
		//�������Ϊ������
		int *list1 = k;
		int list1_size = n / 2;
		int *list2 = k + n / 2;
		int list2_size = n - list1_size;

		//�ݹ黮�����������������
		Mergesort(list1, list1_size);
		Mergesort(list2, list2_size);

		//�ϲ�������
		Merging(list1, list1_size, list2, list2_size);
	}
}




//�鲢����ĵ���ʵ��   ִ��������
void Mergesort_loop(int k[], int n)
{
	int i, left_min, left_max, right_min, right_max;
	int *temp = (int *)malloc(n * sizeof(int));

	for (i = 1; i < n; i *= 2)
	{
		for (left_min = 0; left_min < n - i; left_min = right_max)
		{
			right_min = left_max = left_min + i;
			right_max = left_max + i;

			if (right_max > n)
			{
				right_max = n;
			}

			int next = 0;

			while (left_min < left_max && right_min < right_max)
			{
				if (k[left_min] < k[right_min])
				{
					temp[next++] = k[left_min++];
				}
				else
				{
					temp[next++] = k[right_min++];
				}
			}
			while (left_min < left_max)
			{
				k[--right_min] = k[--left_min];		//ִ�д���
			}
			while (next > 0)
			{
				k[--right_min] = temp[--next];
			}
		}
	}
}