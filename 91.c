#include<stdio.h>
#include<math.h>

int main(){
    int x,s,c;
    printf("enter number =");
    scanf("%d",&x);
    int *ptr=&x;
    s = pow(*ptr,2);
    c = pow(*ptr,3);
    int *ptrs =&s;
    int *ptrc =&c;
    printf("square of number = %d \n",*ptrs);
    printf("cube of number =%d \n",*ptrc);
    return 0;
}