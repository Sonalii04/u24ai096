#include<stdio.h>
int main(){
    int m,e,c,p,b,a;
    printf("marks of mathematics=");
    scanf("%d",m);
    printf("marks of english=");
    scanf("%d",e);
    printf("marks of chemistry=");
    scanf("%d",c);
    printf("marks of physics=");
    scanf("%d",p);
    printf("marks of biology=");
    scanf("%d",b);
    printf("total marks out of 500=%d",m+e+c+p+b);
    a=(m+e+c+p+b)/5;
    printf("percentage",a);
    if(a>=90)
    {printf("A Division");}
    else if (a>=80&&a<=90)
    {printf("B Division");}
    else if (a>=700&&a<=80)
    {printf("C Division");}
    else
    {printf("D Division");}
    return 0;
}



    


