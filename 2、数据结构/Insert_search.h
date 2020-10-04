#pragma once
#pragma once
////����˼�룺���ڶ��ֲ����㷨�������ҵ��ѡ��Ľ�Ϊ����Ӧѡ�񣬿�����߲���Ч�ʡ���Ȼ����ֵ����Ҳ����������ҡ�
////���ֲ��ң�mid=(low+high)/2, ��mid=low+1/2*(high-low);
////������ң�mid=low+(key-a[low])/(a[high]-a[low])*(high-low)��
////���ݹؼ����������������������λ�ã���midֵ�ı仯�������ؼ���key������Ҳ�ͼ�ӵؼ����˱Ƚϴ�����
//
////���Ӷȷ��������ҳɹ�����ʧ�ܵ�ʱ�临�ӶȾ�ΪO(log2(log2n))��
////�������ͣ����ϴ󣬶��ؼ��ֲַ��ֱȽϾ��ȵĲ��ұ����ܱȶ��ָ���
//
#include<iostream>

int insertSearch(int *sortedSeq, int seqLength, int keyData);

//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int location;
//	int target = 4;
//	location = insertSearch(array, 9, target);
//	printf("%d\n", location);
//
//	system("pause");
//	return 0;
//}

int insertSearch(int *sortedSeq, int seqLength, int keyData)
{
	int low = 0, mid, high = seqLength - 1;

	while (low <= high)
	{
		mid = low + (keyData - sortedSeq[low]) / (sortedSeq[high] - sortedSeq[low]);
		if (keyData < sortedSeq[mid])
		{
			high = mid - 1;//��mid-1����Ϊmid�Ѿ��ȽϹ���
		}
		else if (keyData > sortedSeq[mid])
		{
			low = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
//����Ĵ��������д�
//#include<iostream>
//#include<math.h>
//#include<algorithm>
//#include<string>
//#include<time.h>
//
//using namespace std;
////��ֵ���ң������ֵ������ÿ�����ʣ�������ĸ�������ֵ���Ǹ�λ�öΣ����б�������
//int Insert_search(int str[], int n, int key)
//{
//	int mid,low = 0, high = n - 1;
//	while (low <= high)
//	{
//		mid = low + (key - str[high] / str[low] - str[low])*(high - low);//����ȷ��mid����ֲ��Ҳ�ͬ�����඼һ��
//		if (str[mid] == key)
//		{
//			return mid;
//		}
//		if (str[mid] < key)
//		{
//			low = mid + 1;
//		}
//		else
//		{
//			high = mid - 1;
//		}
//	}
//	return -1;
//}