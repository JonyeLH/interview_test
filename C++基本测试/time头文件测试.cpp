//������Ϊ��
//clock_t start, stop;
//double duration;
//start = clock();

//stop = clock();
//duration = ((double)(stop - start)) / CLK_TCK;	//CLOCKS_PER_SEC	//CLK_TCK
//cout<< "�ó������е�ʱ���ǣ�"<< duration << endl;


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//
//	long i = 10000000L;
//	clock_t start, finish;
//	double duration;//����һ���¼�������ʱ��
//
//	printf("Time to do %ld empty loops is ", i);
//	start = clock();
//	while (i--)
//		finish = clock();
//
//	duration = (double)(finish - start) / CLOCKS_PER_SEC;    //clock()���Ժ���Ϊ��λ����ʱ������Գ���CLOCKS_PER_SEC����time.h ���涨���һ������
//	printf("%f seconds\n", duration);
//	system("pause");
//
//}






////������Ϊ����
//clock_t start = clock();
//cout << "��ʼʱ�䣺" << start << endl;
//
//clock_t end = clock();
//cout << "����ʱ�䣺" << end << endl;
//cout << "�㷨ִ�г���ʱ�䣺" << end - start << "����" << endl;

//#include <stdio.h>
//#include <time.h>
//#include <iostream>
//using namespace std;
//void myTime() {
//	clock_t start = clock();
//	cout << "��ʼʱ�䣺" << start << endl;
//	long i = 100000000;
//	while (i--);
//	clock_t end = clock();
//	cout << "����ʱ�䣺" << end << endl;
//	cout << "�㷨ִ�г���ʱ�䣺" << end - start << "����" << endl;
//}
//void main() {
//	myTime();
//	system("pause");
//}