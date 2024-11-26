#include<stdio.h>
int main(){
    int c,a,rev=0,rem;
    printf("enter a=");
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    if(rev==c)
    {
        printf("%d a is PALINDROME");
    }
    else
    {
        printf("%d a is not PALINDROME");
    }
    
    return 0;
}