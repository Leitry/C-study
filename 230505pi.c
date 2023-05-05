/**
*用公式Π/4≈1-1/3+1/5-1/7+...求Π的近似值
*fabs()代表求小数的绝对值，1e-6表示10的-6次方
*term代表公式中的某一项，可能是1,-1/3,1/5...
*pi代表公式的和（即每加一项的pi） 
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
