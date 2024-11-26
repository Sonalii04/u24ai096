#include<stdio.h>
int main(){
    int a,i=0;
    printf("enter a=");
    scanf("%d",&a);
    while(i<=9)
    {   i=i+1;
        printf("\n table of a=%d",a*i);

    }
    return 0;
}