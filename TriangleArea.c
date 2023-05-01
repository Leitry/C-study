#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,s,area;
	
	//Enter the three side lengths of the triangle
	//输入三角形的三个边长
	scanf("%f%f%f",&a,&b,&c);
	
	//Calculate the area of the triangle
	//计算出三角形的面积
	s = (a + b + c) / 2;
	area = sqrt(s * fabs((s - a)) * fabs((s - b)) * fabs((s - c)));
	
	//Display the area of a triangle
	//显示三角形的面积
	if(s == a || s == b || s == c)
		printf("The area of a triangle cannot be calculated based on this formula");
	else
		printf("area = %f",area);
	return 0;
} 
