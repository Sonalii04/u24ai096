#include<stdio.h>
int main(){
    int x=87;
    printf("initially x is %d\n",x);
    int *ptr;
    ptr=&x;
    *ptr=35;
    printf("after modification x is %d\n",x);
    return 0;
}