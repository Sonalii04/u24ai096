#include<stdio.h>
int evenodd(int a);
int main(){
    int a;
    printf("enter a");
    scanf("%d",&a);
    evenodd(a);
    return 0;
}
int evenodd(int a){
    if(a%2==0){
        printf("%d is even",a);
    }
    else
    printf("%d is odd",a);
}