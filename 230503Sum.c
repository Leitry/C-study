#include<stdio.h>
int main(){
	int n,i = 1,sum = 0;
	printf("Please enter a number:");
	scanf("%d",&n);
	while(i <= n){
		sum = sum + i;
		i++;
	}
	//ͨ��ѭ�������ۼӺ� 
	printf("sum is %d",sum);
	//ͨ����ʽ�����ۼӺ� 
	printf("sum is %d\n",(1 + n) * n / 2);
	return 0;
}
