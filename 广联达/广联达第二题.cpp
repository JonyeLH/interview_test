/*
��Ŀ����
��XXħ���顷�м��أ�ֻ��ħ��ʦ���ڵػ�ˮ������Ԫ��ƽ���ʱ����Ǿ��԰�ȫ�ġ�
ĳħ��ʦ�ڸ��Լ�����һ����죬�����Լ����ڵ�����Ԫ�������ֱ���A��B��C��D��ħ��ʦ���ˣ�
��ʱ������ħ�����м�����һ��ת��ħ�������԰�����������λ��Ԫ��ת��������һ��Ԫ�ء�

��������
���������һ�У�������4��������A,B,C,D���ֱ��ʾ����Ԫ�ص���������1<=A,B,C,D<=10^17��

�������
���������һ��������������ʾ

��������
1 2 2 4

�������
8

��ʾ��ֻҪ�ѵ�����Ԫ���е�����ת��Ϊ��һ��Ԫ�ؼ�ƽ�⡣
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	long nums[4], temp, x;
	for (int i = 0; i < 4; i++)
	{
		cin >> nums[i];
	}
	//��ABCD��������
	for (int i = 0; i<4; i++)
	{
		for (int j = i; j<4; j++)
		{
			if (nums[i]<nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
	long a, b, c, d;
	a = nums[0];
	b = nums[1];
	c = nums[2];
	d = nums[3];

	if (a >= (5 * b - 2 * c - 2 * d))
	{
		x = a + 2 * b + 2 * c + 2 * d;
		if (x % 7 == 0)
		{
			cout << 4 * x / 7;
		}
		else {
			cout << -1;
		}
	}
	else if (a<(5 * b - 2 * c - 2 * d) && a>(4 * c - 2 * d - b))
	{
		x = a + b + 2 * c + 2 * d;
		if (x % 6 == 0)
			cout << x * 4 / 6;
		else
			cout << -1;
	}
	else if (a <= (4 * c - 2 * d - b))
	{
		x = a + b + c + 2 * d;
		if (x % 5 == 0)
			cout << x * 4 / 5;
		else
			cout << -1;
	}
	else
	{
		cout << -1;
	}
	return 0;
}


