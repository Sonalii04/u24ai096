#include<stdio.h>
int main(){
    int a[10],sum=0;
    printf("enter 10 integers:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum of 10 integers is:%d",sum);
    
    return 0;
}