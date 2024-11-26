#include<stdio.h>
int main(){
	int m;
	printf("enter marks of maths \n");
	scanf("%d",&m);
	int c;
	printf("enter marks of chem \n");
	scanf("%d",&c);
	int p;
	printf("enter marks of phy \n");
	scanf("%d",&p);
	int e;
	printf("enter marks of english \n");
	scanf("%d",&e);
	int cs;
	printf("enter marks of computer sci \n");
	scanf("%d",&cs);
	printf("total:%d",m+p+c+e+cs);
	printf("percentage:%d",(m+p+c+e+cs)/5);
	return 0;
	
}