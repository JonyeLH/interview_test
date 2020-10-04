#pragma once
#pragma once
#include <stdio.h>
#include <iostream>
#define MAXSIZE 20
using namespace std;

void fibonacci(int *f)   //ʹ�õ��ƹ�ϵ����쳲���������
{
	int i;

	f[0] = 1;
	f[1] = 1;

	for (i = 2; i < MAXSIZE; ++i)
	{
		f[i] = f[i - 2] + f[i - 1];

	}
}//f[i]  1 1 2 3 5 8 13 21 34 55 89
 // i    0 1 2 3 4 5 6  7  8  9  10 

 // *a �Ǵ����������ͷָ�룬key �����ҵ����֣�n �Ǵ�����������Ԫ�صĸ���
 //int a[] = { 1, 5, 15, 22, 25, 31, 39, 42, 47, 49, 59, 68, 88 };
 //�� key=39 n=13
int fibonacci_search(int *a, int key, int n)
{
	int low = 0;
	int high = n - 1;//high=13-1  �±��0��ʼ
	int mid = 0;
	int k = 0;
	int F[MAXSIZE];
	int i;

	fibonacci(F);

	//����nλ��쳲��������е�λ�� 
	while (n > F[k] - 1)
	{
		++k;
	}

	//�������ĳ���С�ڶ�Ӧ��쳲�����������Ԫ�ص�ֵ����ô���������ֵ��չ
	// �����Ԫ��ֵΪ���һ��Ԫ�ص�ֵ
	//��a��Ԫ����չ��(ĳ쳲������� - 1)����F[k]-1 
	for (i = n; i < F[k] - 1; ++i)
	{
		a[i] = a[high];
	}

	while (low <= high)
	{     // low����ʼλ�� 0
		  // ǰ�벿����f[k-1]��Ԫ�أ������±��0��ʼ
		  // ��-1 ��ȡ �ƽ�ָ�λ��Ԫ�ص��±�

		mid = low + F[k - 1] - 1;//���㵱ǰ�ָ���±� 
		if (a[mid] > key)//a[5]=31
		{
			// ����ǰ�벿�֣���λָ���ƶ�
			high = mid - 1;
			// ��ȫ��Ԫ�أ� = ��ǰ�벿�֣�+����벿�֣�
			// f[k] = f[k-1] + f[k-2]
			// ��Ϊǰ�벿����f[k-1]��Ԫ�أ����� k = k-1    
			k = k - 1;
		}
		else if (a[mid] < key)//a[5]=31<39
		{
			// ���Һ�벿�֣���λָ���ƶ�
			low = mid + 1;
			// ��ȫ��Ԫ�أ� = ��ǰ�벿�֣�+����벿�֣�
			// f[k] = f[k-1] + f[k-2]
			// ��Ϊ��벿����f[k-2]��Ԫ�أ����� k = k-2
			k = k - 2;
		}
		else
		{
			if (mid <= high)
			{
				//���൱��˵��mid��Ϊ���ҵ���λ�� 
				return mid;
			}
			else
			{
				//��mid>n��˵������չ����ֵ������n
				return high;
			}
		}
	}

	return -1;
}