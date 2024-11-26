#include<stdio.h>
int main (){
    int n,i,c=0;
    printf("enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        c=i*i;
        printf("%d , ",c);
    }
    
    return 0;
}