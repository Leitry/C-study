#include<stdio.h>
int main(){
	int n;
	//输出100~200不能被3整除的数 
	for(n = 100;n <= 200;n++){
		if(n % 3 == 0)
			continue;
		printf("%4d",n);
	} 
	printf("\n");
	return 0;
} 
