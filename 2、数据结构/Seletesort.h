#pragma once
//�ҳ���С����������ʼλ�ã�ÿ�α�������������ҳ���С�����������������к���
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void Seletesort(int k[], int n)
{
	int i, j, temp, min, count1 = 0, count2 = 0;
	for (i = 0; i < n - 1; i++)
	{
		min = i;//��ʼ�趨��һ��������Сֵ
		for (j = i + 1; j < n; j++)
		{
			count1++;
			if (k[j] < k[min])//ͨ������������趨����Сֵ�Ƚ�
			{
				min = j;//���Ǻ����������С����Сֵ���򽫺��������±긳��min�±�
			}
		}
		if (min != i)//Ȼ���ж����滻��min����ʵ��j���Ƿ��뵱ǰ��i��ȣ������Ƿ񽻻�λ�ã�ȱ�ٿ��ܻ�����жϻ������ƶ�����
		{
			//��k[j]��k[min]����ԭ���趨����Сֵk[i]��λ��
			count2++;
			temp = k[min];
			k[min] = k[i];
			k[i] = temp;
		}

	}
	//cout << "��ִ����" << count1 << "�αȽϺ�" << count2 << "���ƶ�" << endl;
}
