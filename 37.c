#include<stdio.h>
int main (){
    int n,a=0,i,c=0;
    printf("enter n=");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        c=a+i;
        printf("%d , ",c);
    }
    
    return 0;
}