#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a1[n],a2[n],a3[n],i;
    printf("enter integers in a1: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("enter integers in a2: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n;i++){
    a3[i]=a1[i]+a2[i];
    scanf("%d",&a3[i]);
    printf("\n elements of a3:%d",a3[i]);
    }
    return 0;
}