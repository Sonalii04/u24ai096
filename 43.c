#include<stdio.h>
int main(){
    float s,a=0,b=0,c=0,d=0;
    printf("enter sales =");
    scanf("%f",&s);
    if(s<=500)
    {
        a=0.05*s;
        printf("commission is =%f",a);
    }
    else if(s>=501 && s<=2000)
    {
        b=0.1*s;
        printf("commission is =%f",b+35);
    }
    else if(s>=2001 && s<=5000)
    {
        c=0.12*s;
        printf("commission is =%f",185);
    }
    else 
    {
        d=0.125*s;
        printf("commission is =%f",d);
    }
    return 0;
}