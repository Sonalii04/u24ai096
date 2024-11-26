#include<stdio.h>
int main(){
    int a1[3][3],a2[3][3],a3[3][3];
    printf("enter element of arr1");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a1[i][j]);
    }
    }
    printf("enter element of arr2");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a2[i][j]);
    }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a3[i][j]=0;
            a3[i][j]=a1[i][j]-a2[i][j];
            scanf("%d",&a3[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d \t",a3[i][j]);
        }
    printf("\n");
    }
    return 0;
}
