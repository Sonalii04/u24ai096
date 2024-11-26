#include<stdio.h>
int main(){
    int a[10],p=0,q=0,r=0,i;
    printf("enter integers:");
    for(i=0;i<=10;i++){
        scanf("%d",&a[i]);
    
    if(a[i]>0){
        p=p+1;
    }
    else if(a[i]<0){
        q=q+1;
    }
    else
    {
        r=r+1;
    }
    }
    printf("\n total no of positive intergers:%d",p);
    printf("\n total no of negative intergers:%d",q);
    printf("\n total no of zeroes:%d",r);
    return 0;
    
}