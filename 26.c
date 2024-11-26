#include<stdio.h>
int main(){
    int a,i=0;
    int f=0;
    printf ("enter a=");
    scanf("%d",&a);
    for (i=0;i<=a;i=i+2)
    {
        f=f+i;
    }
    printf("sum of even numbers=%d",f);
    int p=0;
    for (i=1;i<=a;i=i+2)
    {
        p=p+i;
    }
    printf("sum of odd numbers=%d",p);
    
    return 0;
}