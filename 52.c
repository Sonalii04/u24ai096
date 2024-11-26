#include<stdio.h>
int main(){
    int row,i,j;
    for(row=1 ;row<=4;row++){
        for(j=1;j<=4-row;j++){
            printf(" ");
        }
        for(i=1;i<=row;i++){
            printf("%d",i);
        }
        for(i=row-1;i>=1;i--){
            printf("%d",i);
        }

        printf("\n");
    
        
        
    }
    
    
    return 0;
}