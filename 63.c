#include<stdio.h>
int main(){
    int arr[3][3],max=0,min=999999999;
    printf("enter element of arr");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
    }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
            else if(arr[i][j]>max){
                max=arr[i][j];
            }
    }
    }
    printf("\n max element is:%d",max);
    printf("\n min element is:%d",min);
    return 0;
}