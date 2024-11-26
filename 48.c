#include<stdio.h>
int main(){
    int row,i,j;

    for(row=1 ;row<=5;row++){
        for(j=1;j<=5-row;j++){
            printf(" ");
        }
        for(i=1;i<=row;i++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}