#include<stdio.h>
int main(){
        int a[3][3];
        printf("enter element of arr");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
    }
    }
    int sumr1=0,sumr2=0,sumr3=0;
    for(int j=0;j<3;j++){
        sumr1=sumr1+a[0][j];
        sumr2=sumr2+a[1][j];
        sumr3=sumr3+a[2][j];
    }
    printf("sum of row 1=%d \n",sumr1);
    printf("sum of row 2=%d \n",sumr2);
    printf("sum of row 3=%d\n",sumr3);
    return 0;
}

