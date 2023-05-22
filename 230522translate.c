//把一串数字翻译成英文如35706 -> three-five-seven-zero-six 
#include<stdio.h>
int main(){
	int i,a[50],j;
	long num1,num2;
	char eng[10][6] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	printf("Please input a number:");
	scanf("%d",&num1);
	num2 = num1;
	j = 0;
	while(num2 != 0){
		a[j++] = num2 % 10;
		num2 = num2 / 10;
	}
	printf("%d English_exp:%s",num1,eng[a[j - 1]]);
	for(i = j - 2;i >= 0;i--){
		printf("-%s",eng[a[i]]);
	}
	return 0; 
}
