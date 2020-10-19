//#include <iostream>
//#include <string>
//#include <assert.h>
//using namespace std;
//#define N (10)
//char * strcpy1(char* str1, char* str2);
//char * strcpy2(char* str1, char* str2);
//int main() {
//	//string s="18";
//	//string ss;
//	
//
//	/*
//	strcpy()�������������ַ�������ԭ��Ϊ��char*strcpy(char *dest, const char *src);
//
//	��������dest ΪĿ���ַ���ָ�룬srcΪԴ�ַ���ָ�롣
//
//	  ע�⣺src �� dest ��ָ���ڴ��������ص����� dest�������㹻�Ŀռ���� src ���������ַ���������������NULL����
//
//	������ֵ���ɹ�ִ�к󷵻�Ŀ������ָ�� dest��
//
//	 strcpy() ��src��ָ����NULL�������ַ������Ƶ�dest ��ָ�������У�����ָ��dest �ַ�������ʼ��ַ��
//
//	 ע�⣺������� dest ��ָ���ڴ�ռ䲻���󣬿��ܻ���ɻ������(bufferOverflow)�Ĵ���������ڱ�д����ʱ��Ҫ�ر����⣬������strncpy()��ȡ����
//	*/
//	char str1[] = "abcd";
//	char str2[50];
//	strcpy1(str2, str1);
//	cout << str2 << endl;
//
//	char str3[50];
//	strcpy2(str3, str1);		//�����������Ȱ������� '\0'
//	cout << str2 << endl;
//
//
//
//	/*
//	 strncpy()���������ַ�����ǰn���ַ�����ԭ��Ϊ��
//      char *strncpy(char *dest, const char *src, size_t n);
//
//	  dest ΪĿ���ַ���ָ�룬src ΪԴ�ַ���ָ�롣
//	  strncpy()�Ὣ�ַ���srcǰn���ַ��������ַ���dest��
//	  ����strcpy()��strncpy()������dest׷�ӽ������'\0'����������˺ܶ಻�ϳ�������⣬
//
//	  src �� dest ��ָ���ڴ��������ص����� dest�������㹻�Ŀռ����n���ַ���ʹ��strncpy()�ȫ��ʽ��ʹn����strlen(src)+1�������������ַ�����ͬʱ��'\0'׷�ӵ�dest��
//	*/
//	char str4[50];
//	strncpy_s(str4, str1, 2);		//ָ�����Ƴ���
//	int n = sizeof(str4);
//	cout << str4 << " " << n <<endl;
//
//
//
//
//
//	/*
//	memcpy()���������ڴ棬ԭ��void *memcpy ( void * dest, const void * src, size_t num );
//	memcpy() �Ḵ�� src ��ָ���ڴ����ݵ�ǰ num ���ֽڵ� dest��ָ���ڴ��ַ�ϡ�
//	memcpy()�������ı����Ƶ��������ͣ�ֻ�����ֽڵؽ��и��ƣ����������ʹ�ô����˺ܴ������ԣ����������κ��������ͽ��и��ơ�
//
//	dest ָ��Ҫ�����㹻�Ŀռ䣬Ҳ�����ڵ��� num�ֽڵĿռ䡣���û�з���ռ䣬����ֶϴ���
//    dest �� src��ָ���ڴ�ռ䲻���ص�������������ص���ʹ�� memmove() ����Ӱ�ȫ������ strcpy() ��ͬ���ǣ�memcpy() �������ĸ��� num���ֽڣ�������Ϊ������\0����������
//	
//	����ָ�� dest ��ָ�롣ע�ⷵ�ص�ָ��������void��ʹ��ʱһ��Ҫ����ǿ������ת����
//	*/
//	char *p1 = "abcde";
//	char *p2 = (char *)malloc(sizeof(char) * N);
//	char *p3 = (char *)memcpy(p2, p1, N);		
//	printf("p2 = %s\np3 = %s\n", p2, p3);		
//
//	free(p2);
//	p2 = NULL;
//	p3 = NULL;
//
//
//
//	/*
//	memmove() ���������ڴ����ݣ���ԭ��Ϊ��
//      void *memmove(void *dest, const void *src, size_t num);
//	
//	memmove() �� memcpy() ���ƶ����������� src��ָ���ڴ�����ǰ num ���ֽڵ� dest ��ָ�ĵ�ַ�ϡ�
//  ��ͬ���ǣ�memmove() ��Ϊ����src �� dest��ָ���ڴ������ص�ʱ��memmove() ��Ȼ������ȷ�Ĵ�������ִ��Ч���ϻ��ʹ�� memcpy()����Щ��
//	*/
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);			
//	puts(str);
//
//
//	system("pause");
//	return 0;
//}
//
//char * strcpy1(char* str1, char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	if (str1 == NULL && str2 == NULL)
//		return NULL;
//	int i = 0;
//	for (; str2[i] != '\0'; i++) {
//		str1[i] = str2[i];
//	}
//	str1[i] = '\0';
//	return str1;
//}
//
//char * strcpy2(char* str1, char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	if (str1 == NULL && str2 == NULL)
//		return NULL;
//	while ((*str1++ = *str2++) != '\0');
//	return str1;
//}