/**
*����1!+2!+3!+4!+...+n!
*/
#include<stdio.h>
double fun(int n);
int main(){
	int i,n;
	double sum  = 0;
	//����n��ֵ 
	scanf("%d",&n);
	//��ѭ��������ֵ 
	for(i = 1;i <= n;i++)
		sum += fun(i);
	printf("%.0f\n",sum);
	return 0;
}
//���x!��ֵ������ 
double fun(int x){
	int i;
	double f = 1;
	for(i = 1;i <= x;i++)
		f *= i;
	return f;
}
