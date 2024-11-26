#include<stdio.h>
int main(){
    int sec,a,b,c,d;
    printf("\n enter sec");
    scanf("%d",&sec);
    a=sec/3600;
    b=sec%3600;
    c=b/60;
    d=b%60;
    printf("%d:%d:%d",a,c,d);
    //printf("/nmin is=%d",c);
    //printf("/nsec is =%d",d);
    scanf("%d",&d);


    return 0;
    
}