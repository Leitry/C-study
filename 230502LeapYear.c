#include<stdio.h>
int main(){
	int leap,year;
	printf("Please input the year:");
	//������� 
	scanf("%d",&year);
	//�ж��Ƿ�Ϊ���� 
	if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
		printf("%d is a leap year.",year);
	else
		printf("%d is not a leap year.",year);
	return 0;
}   
