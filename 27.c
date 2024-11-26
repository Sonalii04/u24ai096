#include<stdio.h>
int main(){
    int a,i,count=0;
    printf("enter a=");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count>2)
    {
        printf(" a is not prime number");
    }
    else
    {
        printf("a is prime number");
    } 
    return 0;
}