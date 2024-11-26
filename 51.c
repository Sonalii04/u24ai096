#include<stdio.h>
int main(){
    int row,i,j;

    for(row=1 ;row<=5;row++){
        for(i=1;i<=5;i++){
            if(row==i){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
