//����ָ�뽫һ���ַ�����ֵ���Ƹ���һ���ַ��� 
#include<stdio.h>
int main(){
	char ch[] = "Hello,World!",ch1[20];
	int i;
	for(i = 0;*(ch + i) != '\0';i++)
		*(ch1 + i) = *(ch + i);
	*(ch1 + i) = '\0';
	printf("string ch is :%s\n",ch);
	printf("string ch1 is :");
	for(i = 0;ch1[i] != '\0';i++)
		printf("%c",ch1[i]);
	printf("\n");
	return 0;
} 
