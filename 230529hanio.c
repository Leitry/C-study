#include<stdio.h> 
void hanio(int n,char a,char b,char c){
	if(n <= 0) return;
	hanio(n-1,a,c,b);	
	printf("%d�����Ӵ�%c������%c����\n",n,a,b);
	hanio(n-1,c,b,a);
}
int main(){
	int n;
	scanf("%d",&n); 
	hanio(n,'A','B','C');
	return 0;
}
