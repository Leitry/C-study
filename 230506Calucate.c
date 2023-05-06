/**
*计算1!+2!+3!+4!+...+n!
*/
#include<stdio.h>
double fun(int n);
int main(){
	int i,n;
	double sum  = 0;
	//输入n的值 
	scanf("%d",&n);
	//用循环求函数的值 
	for(i = 1;i <= n;i++)
		sum += fun(i);
	printf("%.0f\n",sum);
	return 0;
}
//求出x!的值并返回 
double fun(int x){
	int i;
	double f = 1;
	for(i = 1;i <= x;i++)
		f *= i;
	return f;
}
