#include<stdio.h>
int main(){
	int n,i = 1,sum = 0;
	printf("Please enter a number:");
	scanf("%d",&n);
	while(i <= n){
		sum = sum + i;
		i++;
	}
	//通过循环计算累加和 
	printf("sum is %d",sum);
	//通过公式计算累加和 
	printf("sum is %d\n",(1 + n) * n / 2);
	return 0;
}
