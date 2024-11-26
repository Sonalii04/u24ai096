#include<stdio.h>
int main(){
	int principal;
	printf("enter principal amount ");
	scanf("%d",&principal);
	printf("principal is :%d \n",principal);
	int time;
	printf("time");
	scanf("%d",&time);
	printf("time is:%d \n",time);
	float rate;
	printf("enter rate:");
	scanf("%f",&rate);
	printf("enter rate:%f",rate);
	printf("simple interest:%f \n",(principal*time*rate)/100);
	return 0;
	
	
	
	
	
}