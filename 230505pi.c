/**
*�ù�ʽ��/4��1-1/3+1/5-1/7+...�󦰵Ľ���ֵ
*fabs()������С���ľ���ֵ��1e-6��ʾ10��-6�η�
*term����ʽ�е�ĳһ�������1,-1/3,1/5...
*pi����ʽ�ĺͣ���ÿ��һ���pi�� 
*/
#include<stdio.h>
#include<math.h>
int main(){
	int sign = 1;
	double pi = 0.0,n = 1.0,term = 1.0;
	while(fabs(term) >= 1e-6){
		pi = pi + term;
		n = n + 2;
		sign = -sign;
		term = sign / n;
	}
	pi = pi * 4;
	printf("pi = %10.8f\n",pi);
	return 0;
}
