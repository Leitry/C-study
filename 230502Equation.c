#include<stdio.h>
#include<math.h>
int main(){ 
	//a,b,c��ʾ����������x1,x2��ʾ����
	double a,b,c,disc,p,q,x1,x2;
	//����a��b��c 
	scanf("%lf%lf%lf",&a,&b,&c);
	disc = b * b - 4 *a * c;
	if(disc < 0)
		printf("This equation hasn't real roots\n");
	else{
		p =  - b / (2.0 * a);
		//sqrt�Ǹ������㣬��Ҫ����ͷ�ļ�math.h 
		q = sqrt(disc) / (2.0 * a);
		x1 = p + q;x2 = p - q;
		//�������x1,x2 
		printf("x1 = %7.2f\nx2 = %7.2f",x1,x2);
	}
	return 0;
} 
