//��ָ������������
//����ָ������10����
//Ȼ����ָ����� 
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
		//++�����ȼ�����*���Եȼ���*(p++) 
		printf("%d ",*p++);
	printf("\n");
	return 0;
}
