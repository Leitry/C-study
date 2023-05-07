//用指针来操作数组
//先用指针输入10个数
//然后用指针输出 
#include<stdio.h>
int main()
{
	int a[10],*p,i;
	p = a;
	printf("Please enter 10 integer numbers:"); 
	for(i = 0;i < 10;i++)
		scanf("%d",p++);
	p = a;
	for(i = 0;i < 10;i++)
		//++的优先级高于*所以等价于*(p++) 
		printf("%d ",*p++);
	printf("\n");
	return 0;
}
