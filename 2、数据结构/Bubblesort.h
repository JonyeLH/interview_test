#pragma once
#pragma once
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

//�����϶����ð������
void Bubblesort_error(int k[], int n)
{
	int i, j, temp, count1 = 0, count2 = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			count1++;
			if (k[i] > k[j])//��һ��forѭ��������ڶ���forѭ�����Ƚϴ�С����ð�������岻����ð����Ҫ�������Ƚ�,��������i �ֱ��� j ���жԱ�   �������� i �� j
			{
				count2++;
				temp = k[j];
				k[j] = k[i];
				k[i] = temp;
			}
		}
	}
	//cout << "��ִ����" << count1 << "�αȽϺ�" << count2 << "���ƶ�" << endl;
}

//ֻ��ס���֣���������ȷ��ð�������㷨
void Bubblesort(int k[], int n)
{
	int i, j, temp, count1 = 0, count2 = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j >i; j--)//�Ӻ���ǰ�������� j �� j -1  ���бȽϺͽ���  �Ƿ���ð�ݵĶ��壬��������
		{
			count1++;
			if (k[j - 1] > k[j])
			{
				count2++;
				temp = k[j - 1];
				k[j - 1] = k[j];
				k[j] = temp;
			}
		}
	}
	//cout << "��ִ����" << count1 << "�αȽϺ�" << count2 << "���ƶ�" << endl;
}

//����ķ���
void Bubblesort_(int k[], int n)
{
	int count1 = 0, count2 = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			count1++;
			if (k[j] > k[j + 1]) {
				count2++;
				int temp = k[j + 1];
				k[j + 1] = k[j];
				k[j] = temp;
			}
		}
	}
	//cout << "��ִ����" << count1 << "�αȽϺ�" << count2 << "���ƶ�" << endl;
}
////ð������ĸĽ�,���ھֲ����򣬴������򣬼��ٲ���Ҫ���ƶ�����			����ϸ�о�
//void Bubblesort_modify(int k[], int n)
//{
//	int i, j, temp, flag = 1, count1 = 0, count2 = 0;
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = n - 1; j > i; j--)
//		{
//			count1++;
//			flag = 0;
//			if (k[j - 1] > k[j])
//			{
//				count2++;
//				temp = k[j - 1];
//				k[j - 1] = k[j];
//				k[j] = temp;
//				flag = 1;
//			}
//		}
//	}
//	cout << "��ִ����" << count1 << "�αȽϺ�" << count2 << "���ƶ�" << endl;
//}