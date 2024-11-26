#include<stdio.h>
int main(){
	int s;
	printf("period of revolution in sec \n");
	scanf("%d",&s);
	printf("period of revolution in min:%d",s/60);
	printf("period of revolution in hours:%d",s/3600);
	printf("period of revolution in days:%d",(s/3600)/24);
	return 0;
}