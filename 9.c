#include<stdio.h>
int main(){
	int h;
	printf("\n time in hours ");
	scanf("%d",&h);
	int a;
	a=h*3600;
	printf("\n time in sec:%d",a);
	int m;
	printf("\n time in min ");
	scanf("%d",&m);
	int b;
	b=h*60;
	printf("\n time in sec:%d",b);
	int s;
	printf("\n time in sec");
	scanf("%d",&s);
	printf("total seconds:%d",(a+b+s));
	return 0;
	
	
}