#pragma once
#pragma once
//�����򣬶�����ʵ��
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void swap(int k[], int i, int j)
{
	int temp;
	temp = k[i];
	k[i] = k[j];
	k[j] = temp;
}

void HeapAdjust(int k[], int s, int n)//s�趨Ϊ˫�׽ڵ�
{
	int i, temp;
	temp = k[s];

	for (i = 2 * s; i <= n; i *= 2)
	{
		if (i<n && k[i] < k[i + 1])//���Ӵ����Һ���
		{
			i++;//iָ������ӵ��±�
		}
		if (temp > k[i])//�Ƚ�˫���������
		{
			break;//�ǵĻ����õ���
		}

		//����Ļ����ͽ����ĺ��Ӹ���˫�׽ڵ㣬�±�Ҳ����
		k[s] = k[i];
		s = i;
	}
	//���˫�׽ڵ㻻�����ӵ�λ��
	k[s] = temp;
}

void Heapsort(int k[], int n)
{
	int i;

	for (i = n / 2; i > 0; i--)//�������ϣ�������������Ĵ󶥶ѣ�i��ʼӦ���趨Ϊ��ȫ�������������µ�˫�׽ڵ�
	{
		HeapAdjust(k, i, n);
	}

	for (i = n; i > 1; i--)//�������ϵ���
	{
		swap(k, 1, i);//������������������Ԫ�ػ���
		HeapAdjust(k, 1, i - 1);//�ٴε����ѵĴ�С��λ��
	}
}