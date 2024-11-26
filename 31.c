#include<stdio.h>
int main(){
    int c,a,s=0,rem;
    printf("enter a=");
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
        rem=a%10; 
        s=s+rem;
        a/=10;
    }
    printf("sum of individual digit of a=%d",s);
    return 0;
}