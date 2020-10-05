#pragma once
//找出最小的数放在起始位置，每次遍历后面的数，找出次小的数放在已排序序列后面
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void Seletesort(int k[], int n)
{
	int i, j, temp, min, count1 = 0, count2 = 0;
	for (i = 0; i < n - 1; i++)
	{
		min = i;//初始设定第一个数是最小值
		for (j = i + 1; j < n; j++)
		{
			count1++;
			if (k[j] < k[min])//通过后面的数与设定的最小值比较
			{
				min = j;//若是后面的数存在小于最小值，则将后面数的下标赋给min下标
			}
		}
		if (min != i)//然后判断以替换的min（其实是j）是否与当前的i相等，做出是否交换位置，缺少可能会这个判断会增加移动次数
		{
			//把k[j]（k[min]）与原来设定的最小值k[i]换位置
			count2++;
			temp = k[min];
			k[min] = k[i];
			k[i] = temp;
		}

	}
	//cout << "共执行了" << count1 << "次比较和" << count2 << "次移动" << endl;
}
