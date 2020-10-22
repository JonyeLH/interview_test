/*
题目描述
《XX魔法书》中记载，只有魔法师体内地火水风四种元素平衡的时候才是绝对安全的。
某魔法师在给自己做了一个体检，发现自己体内的四种元素数量分别是A，B，C，D，魔法师慌了，
这时他看到魔法书中记载了一种转换魔法，可以把任意两个单位的元素转换成任意一种元素。

输入描述
输入仅包含一行，仅包含4个正整数A,B,C,D，分别表示四种元素的数量。（1<=A,B,C,D<=10^17）

输出描述
输出仅包含一个整数，如题所示

样例输入
1 2 2 4

样例输出
8

提示：只要把第四种元素中的两个转换为第一种元素即平衡。
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
	//对ABCD进行排序
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


