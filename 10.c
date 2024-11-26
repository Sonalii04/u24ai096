#include<stdio.h>
int main(){
	int m ;
	printf("\n marks in maths out of 200 ");
	scanf("%d",&m);
	int p ;
	printf("\n marks in phy out of 200 ");
	scanf("%d",&p);
	int c ;
	printf("\n marks in chem out of 200 ");
	scanf("%d",&c);
	int e ;
	printf("\n marks in entrance exam. out of 100 ");
	scanf("%d",&e);
	printf("cut off marks:%d",(m/2)+(p/2)+(c/2)+e);
	return 0;
	
	
}