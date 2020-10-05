#pragma once
#pragma once
//希尔排序是在插入排序的基础上改进
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

//通过增大两两比较的间隙来实现,将原来的间距1变成gap
void Shellsort(int k[], int n)
{
	int i, j, temp;
	int gap = n;

	do
	{
		gap = gap / 3 + 1;//自行设置比较间距的大小
		for (i = gap; i < n; i++)
		{
			if (k[i] < k[i - gap])//扩大比较间隔i-gap
			{
				temp = k[i];

				for (j = i - gap; k[j] > temp; j -= gap)
				{
					k[j + gap] = k[j];
				}
				k[j + gap] = temp;
			}
		}
	} while (gap > 1);//循环退出条件
}