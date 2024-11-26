#include<stdio.h>
#include<math.h>
int armstrong(int a);
int main(){
    int n;
    printf("enter n=");
    scanf("%d",&n);
    armstrong(n);
}
int armstrong(int a){
    int c,count=0,x,s=0,rem;
    c=a;
    while(a!=0){
        a=a/10;
        count++;
    }
    x=c;
    while(c!=0)
    {
        rem=c%10;
        s=s+pow(rem,count);
        c=c/10;
    }
    if (x==s)
        {printf("%d is ARMSTRONG",x);}
    else
        {printf("%d is not ARMSTRONG",x);}
        return 0;
}
