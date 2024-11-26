#include<stdio.h>
int main(){
	int bp;
	printf("enter basic pay \n");
	scanf("%d",&bp);
	int da;
	printf("enter dearness allowance \n");
	scanf("%d",&da);
	int b;
	printf("enter bonus \n");
	scanf("%d",&b);
	printf("gross income:%d",bp+da+b);
	return 0;
	
}