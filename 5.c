#include<stdio.h>
int main(){
	int a,b,c;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	
	printf("value of a and b are :%d%d",a,b);
	return 0 ;
}