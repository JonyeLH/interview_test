///*
//���Ժ���assert()��һ����,����assert �ǽ���Debug �汾�����õĺ꣬�����ڼ��"��Ӧ��"�����������
//
//ͷ�ļ�assert.h
//#include "assert.h"
//void assert( int expression );
//
//assert ���������ּ�����ʽ expression ��!!!�����ֵΪ�٣���Ϊ0��!!!!����ô������ stderr ��ӡһ��������Ϣ,Ȼ��ͨ������ abort ����ֹ�������С�
//
//ʹ�� assert ��ȱ���ǣ�Ƶ���ĵ��ûἫ���Ӱ���������ܣ����Ӷ���Ŀ�����
//
//�ڵ��Խ����󣬿���ͨ���ڰ��� #include �����֮ǰ���� #define NDEBUG ������ assert ���ã�ʾ���������£�
//#include
//#define NDEBUG
//#include
//
//*/
//#include <iostream>
//#include <assert.h>
//
//#define MAX_BUFFER_SIZE 100
//
//#define Min_BUFFER_SIZE 0
//
////���ã��ں�����ʼ�����鴫������ĺϷ���
//int resetBufferSize(int nNewSize1,int nNewSize2)
//{
//	//����:�ı仺������С, 
//	//����:nNewSize �������³��� 
//	//����ֵ:��������ǰ���� 
//	//˵��:����ԭ��Ϣ���ݲ��� nNewSize<=0��ʾ��������� 
//	assert(nNewSize1 >= Min_BUFFER_SIZE);
//	assert(nNewSize2 <= MAX_BUFFER_SIZE);
//
//	//ע�⣺ÿ��assertֻ����һ������, ��Ϊͬʱ����������ʱ, �������ʧ��, �޷�ֱ�۵��ж����ĸ�����ʧ��
//
//	assert(nNewSize1 >= Min_BUFFER_SIZE && nNewSize2 <= MAX_BUFFER_SIZE);
//
//
//	//����ʹ�øı价�������,��Ϊassertֻ��DEBUG����Ч,�����ô��,��ʹ�ó�������������ʱ��������
//	/*
//	����: assert(i++ < 100)
//	������Ϊ�������������ִ��֮ǰi=100,��ô�������Ͳ���ִ�У���ôi++���������û��ִ�С�
//
//	��ȷ:
//	assert(i < 100)
//	i++; 
//	*/
//
//	return 0;
//}
//
//int main() {
//
//	int a = -1 , b = 101;
//	resetBufferSize(a,b);	//����
//
//
//	return 0;
//}