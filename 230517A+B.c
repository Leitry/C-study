/**
* scanf()函数返回值是int型，
* 1.如果x和y能够被成功读入，那么scanf的返回值就是 2
* 2.如果只有a被成功读入，返回值为 1
* 3.如果a和b都未被成功读入，返回值为 0
* 4.如果遇到错误或遇到end of file，返回值为EOF。 
* EOF：EOF是一个计算机术语，为End Of File的缩写，它被定义为是int类型的一个负数-1
* C语言中，EOF常被作为文件结束的标志。还有很多文件处理函数处
* 错误后的返回值也是EOF，因此常被用来判断调用一个函数是否成功。
* ~ 是按位取反的意思，scanf函数返回 2，按位取反后是 -3，继续循环 
* C语言中 0 表示真，非 0 表示假 
*/

#include<stdio.h> 
int main()
{
    int a,b;
    while(~scanf("%d%d", &a, &b))
		printf("%d\n",a+b);
    return 0;
}
