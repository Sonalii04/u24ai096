#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=4;i++){

     for(k=1;k<=4-i;k++){
        printf(" ");
    }
    
    for(j=1;j<=i;j=j++){
        printf("*");
    }
    for(j=2;j<=i;j=j+1){
        printf("*");
    }
    printf("\n");
}
for (i=5;i<=7;i++){
    for(k=13;k>=18-i;k--){
        printf(" ");
    }
    for(j=7;j>=i;j--){
        printf("*");
    }
    for(j=6;j>=i;j--){
        printf("*");
    }

    printf("\n");
}
return 0;
}