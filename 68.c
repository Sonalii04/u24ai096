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
            for(int k=0;k<3;k++){
            a3[i][j]=a1[k][0]*a2[k][j]+a1[k][1]*a2[1][j]+a1[k][2]*a2[2][j];
            scanf("%d",&a3[i][j]);
            }
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
