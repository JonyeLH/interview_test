//计算结果为秒
//clock_t start, stop;
//double duration;
//start = clock();

//stop = clock();
//duration = ((double)(stop - start)) / CLK_TCK;	//CLOCKS_PER_SEC	//CLK_TCK
//cout<< "该程序运行的时间是："<< duration << endl;


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//
//	long i = 10000000L;
//	clock_t start, finish;
//	double duration;//测量一个事件持续的时间
//
//	printf("Time to do %ld empty loops is ", i);
//	start = clock();
//	while (i--)
//		finish = clock();
//
//	duration = (double)(finish - start) / CLOCKS_PER_SEC;    //clock()是以毫秒为单位计算时间的所以除以CLOCKS_PER_SEC这是time.h 里面定义的一个常量
//	printf("%f seconds\n", duration);
//	system("pause");
//
//}






////计算结果为毫秒
//clock_t start = clock();
//cout << "开始时间：" << start << endl;
//
//clock_t end = clock();
//cout << "结束时间：" << end << endl;
//cout << "算法执行持续时间：" << end - start << "毫秒" << endl;

//#include <stdio.h>
//#include <time.h>
//#include <iostream>
//using namespace std;
//void myTime() {
//	clock_t start = clock();
//	cout << "开始时间：" << start << endl;
//	long i = 100000000;
//	while (i--);
//	clock_t end = clock();
//	cout << "结束时间：" << end << endl;
//	cout << "算法执行持续时间：" << end - start << "毫秒" << endl;
//}
//void main() {
//	myTime();
//	system("pause");
//}