#pragma once
#pragma once
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void Insertesort(int k[], int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++)//��������Ҫ��i=1��ʼ��
	{
		if (k[i] < k[i - 1])//������ֺ��������ǰ���С
		{
			temp = k[i];

			for (j = i - 1; k[j] > temp; j--)//��������Ӻ���ǰ���αȽ�
			{
				k[j + 1] = k[j];//���ǰ��������󣬾ͰѴ��������ƶ�
			}

			k[j + 1] = temp;//�����Сֵ��ֵ����������λ��
		}
	}
}


