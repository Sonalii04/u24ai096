#include<stdio.h>
int ncr(int n, int r);
int main(){
    int p,q;
    printf("\n enter p=");
    scanf("%d",&p);
    printf("\n enter q=");
    scanf("%d",&q);
    printf("%d C %d=%d",p,q,ncr(p,q));
    return 0;
}
int ncr(int n, int r){
    int x=0,a,i,p,q,b=1,c=1,d=1;
    p=n,q=r;
    for(i=1;i<=n;++i){
        b=b*i;
    }
    for(i=1;i<=r;++i){
        c=c*i;
    }
    a=p-q;
    for(i=1;i<=a;++i){
        d=d*i;
    }
    x=(b/(c*d));
    return x;
    
}