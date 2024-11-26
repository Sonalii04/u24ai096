#include<stdio.h>
int main(){
    int a[10],p=0,q=0,i;
    printf("enter integers:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    if(a[i]%2==0){
        p+=1;
    }
    else{
        q+=1;
    }
    }
    printf("total no of even integers:%d",p);
    printf("total no of odd integers:%d",q);
    return 0;
}