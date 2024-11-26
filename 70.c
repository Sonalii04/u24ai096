#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter n:");
    scanf("%d",&n);
    int a[3][3];
    printf("enter element of arr =");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==n){
               count++;
            }
    }
    }
    printf("no of occurance of element is:%d",count);
    return 0;
}