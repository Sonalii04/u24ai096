#include<stdio.h>
int interchange(int x,int y);
int main(){
    int x,y;
    printf("enter x");
    scanf("%d",&x);
    printf("enter y");
    scanf("%d",&y);
    interchange(x,y);
}
int interchange(int x,int y){
    int a;
    a=x;
    x=y;
    y=a;
    printf("%d is value of x",x);
    printf("%d is value of y",y);
    return 0;
}