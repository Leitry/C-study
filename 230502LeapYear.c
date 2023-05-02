#include<stdio.h>
int main(){
	int leap,year;
	printf("Please input the year:");
	//输入年份 
	scanf("%d",&year);
	//判断是否为闰年 
	if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
		printf("%d is a leap year.",year);
	else
		printf("%d is not a leap year.",year);
	return 0;
}   
