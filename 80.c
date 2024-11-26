#include<stdio.h>
int fibonacci(int n);
int main(){
    int a;
    printf("enter a");
    scanf("%d",&a);
    fibonacci(a);
}
int fibonacci(int n){

    int a=0,b=1;
    printf("%d \t",a);
    printf("%d\t",b);
    while(b<=n)
    {
        a=a+b;
        printf(" %d\t",a);
        b=a+b;
        printf(" %d\t",b);
    }
    return 0;
}