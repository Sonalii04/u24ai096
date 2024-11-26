#include<stdio.h>
int main(){
    int a[3][3];
    printf("enter element of arr =");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
    }
    }
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==n){
                printf("%d ,%d",i,j);
            }
        }
    }
    return 0;
}
