/*
实现一个动态调整大小的数组，存储整型数（int）,只提供三个操作：
1、向数组尾部追加一个新元素。如果空间不够，自动扩容，追加空间操作时间复杂度为O(1)：void push(int num)
2、从尾部删除一个元素，如果不为空返回删除元素，如果为空返回-1，不执行删除操作。当删除较多元素后，要对数组进行缩容，，时间复杂度为O(1)：int pop()
3、根据下标获得对应的整数，如果下标越界返回-1，时间复杂度为O(1)：int get(int index)

输入描述：一行一个操作，操作分为三类
1、从尾部追加新元素，格式：push + 空格 + 整数
2、删除尾部元素，格式：pop
3、根据下标获取元素，格式：get + 空格 +下标索引
输出描述：每个操作对应一行输出
1、对于push，输出push之后数组大小
2、对于pop，输出pop（）的返回值
3、对于get，输出get（）的返回值

例：
输入：
push 1
push 3
pop
push 4
get 0
get 4
输出：
1
2
3
2
1
-1

*/

#include <iostream>
#include <vector>
using namespace std;

void push(int num);
int pop();
int get(int index);

int main() {





	return 0;
}

