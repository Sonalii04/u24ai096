#include<stdio.h>
//print amount to be paid by customer
int main(){
    float unit,a,b,c;
    
    printf("enter unit=");
    scanf("%f",&unit);
    if(unit>=0 && unit<=200)
    {
        a=0.5*unit;
        printf("%f",a);
    }
    
    else if(unit>=201 && unit<=400)
    {
        b=0.65*unit+100;
        printf("%f",b);
    }
    else if(unit>=401 && unit<=600)
    {
        c=0.80*unit+230;
        printf("%f",c);
    }
    else
    {
        c=1.25*unit+425;
        printf("%f",c);
    }
    return 0;
}