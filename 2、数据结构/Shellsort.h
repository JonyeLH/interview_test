#pragma once
#pragma once
//ϣ���������ڲ�������Ļ����ϸĽ�
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

//ͨ�����������Ƚϵļ�϶��ʵ��,��ԭ���ļ��1���gap
void Shellsort(int k[], int n)
{
	int i, j, temp;
	int gap = n;

	do
	{
		gap = gap / 3 + 1;//�������ñȽϼ��Ĵ�С
		for (i = gap; i < n; i++)
		{
			if (k[i] < k[i - gap])//����Ƚϼ��i-gap
			{
				temp = k[i];

				for (j = i - gap; k[j] > temp; j -= gap)
				{
					k[j + gap] = k[j];
				}
				k[j + gap] = temp;
			}
		}
	} while (gap > 1);//ѭ���˳�����
}