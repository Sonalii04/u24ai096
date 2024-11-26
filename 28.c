#include<stdio.h>
#include<math.h>
int main(){
    int c,a,s=0,rem,count=0,x;
    printf("enter a=");
    scanf("%d",&a);
    x=c=a;
    while(a!=0){
        a=a/10;
        count++;
    }
    while(c!=0)
    {
        rem=c%10;
        s=s+(pow(rem,count));
        c=c/10;
    }
    printf("%d", s);
    if (x==s)
        {printf("%d is ARMSTRONG",x);}
    else
        {printf("%d is not ARMSTRONG",x);}
    return 0;
}
