#include<stdio.h>
int main(){
    char row,i;
    for(row='A';row<='E';row++){
        for(i='A';i<=row;i++){
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
} 