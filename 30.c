#include<stdio.h>
int main(){
    int a,rev=0,rem;
    printf("enter a=");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    printf("reverse of a=%d",rev);
    return 0;
}