#include<stdio.h>
int main(){
	int n;
	//���100~200���ܱ�3�������� 
	for(n = 100;n <= 200;n++){
		if(n % 3 == 0)
			continue;
		printf("%4d",n);
	} 
	printf("\n");
	return 0;
} 
