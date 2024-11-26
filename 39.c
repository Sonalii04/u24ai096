#include<stdio.h>
//print 1/1! +2/2!+3/3!
int main (){
    int n,i,c=0;
    printf("enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        printf("%d/%d! +",i,i);
    }
    return 0;
}