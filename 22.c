#include<stdio.h>
int main(){
    int a,i,f;
    f=1;
    printf("enter a=");
    scanf("%d",&a);
    for(i=1;i<=a;++i)
    {   f=f*i;
        
    }
    printf("factorial of a =%d",f);
    return 0;
}