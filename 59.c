#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a1[n],a2[n],a3=0,i;
    printf("enter elements of a1:");
    for (i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("enter elements of a2:");
    for (i=0;i<n;i++){
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n;i++){
        a3=a1[i];
        scanf("%d",&a3);
        a1[i]=a2[i];
        scanf("%d",&a1[i]);
        a2[i]=a3;
        scanf("%d",&a2[i]);
        printf("\n element of a1:%d",a1[i]);
        printf("\n elements of a2:%d",a2[i]);
    }
    return 0;
}