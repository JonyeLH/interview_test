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
//	strcpy()函数用来复制字符串，其原型为：char*strcpy(char *dest, const char *src);
//
//	【参数】dest 为目标字符串指针，src为源字符串指针。
//
//	  注意：src 和 dest 所指的内存区域不能重叠，且 dest必须有足够的空间放置 src 所包含的字符串（包含结束符NULL）。
//
//	【返回值】成功执行后返回目标数组指针 dest。
//
//	 strcpy() 把src所指的由NULL结束的字符串复制到dest 所指的数组中，返回指向dest 字符串的起始地址。
//
//	 注意：如果参数 dest 所指的内存空间不够大，可能会造成缓冲溢出(bufferOverflow)的错误情况，在编写程序时需要特别留意，或者用strncpy()来取代。
//	*/
//	char str1[] = "abcd";
//	char str2[50];
//	strcpy1(str2, str1);
//	cout << str2 << endl;
//
//	char str3[50];
//	strcpy2(str3, str1);		//复制整个长度包括最后的 '\0'
//	cout << str2 << endl;
//
//
//
//	/*
//	 strncpy()用来复制字符串的前n个字符，其原型为：
//      char *strncpy(char *dest, const char *src, size_t n);
//
//	  dest 为目标字符串指针，src 为源字符串指针。
//	  strncpy()会将字符串src前n个字符拷贝到字符串dest。
//	  不像strcpy()，strncpy()不会向dest追加结束标记'\0'，这就引发了很多不合常理的问题，
//
//	  src 和 dest 所指的内存区域不能重叠，且 dest必须有足够的空间放置n个字符。使用strncpy()最安全方式是使n等于strlen(src)+1，即拷贝整个字符串，同时将'\0'追加到dest。
//	*/
//	char str4[50];
//	strncpy_s(str4, str1, 2);		//指定复制长度
//	int n = sizeof(str4);
//	cout << str4 << " " << n <<endl;
//
//
//
//
//
//	/*
//	memcpy()用来复制内存，原型void *memcpy ( void * dest, const void * src, size_t num );
//	memcpy() 会复制 src 所指的内存内容的前 num 个字节到 dest所指的内存地址上。
//	memcpy()并不关心被复制的数据类型，只是逐字节地进行复制，这给函数的使用带来了很大的灵活性，可以面向任何数据类型进行复制。
//
//	dest 指针要分配足够的空间，也即大于等于 num字节的空间。如果没有分配空间，会出现断错误。
//    dest 和 src所指的内存空间不能重叠（如果发生了重叠，使用 memmove() 会更加安全）。与 strcpy() 不同的是，memcpy() 会完整的复制 num个字节，不会因为遇到“\0”而结束。
//	
//	返回指向 dest 的指针。注意返回的指针类型是void，使用时一般要进行强制类型转换。
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
//	memmove() 用来复制内存内容，其原型为：
//      void *memmove(void *dest, const void *src, size_t num);
//	
//	memmove() 与 memcpy() 类似都是用来复制 src所指的内存内容前 num 个字节到 dest 所指的地址上。
//  不同的是，memmove() 更为灵活，当src 和 dest所指的内存区域重叠时，memmove() 仍然可以正确的处理，不过执行效率上会比使用 memcpy()略慢些。
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