#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n],i,j;
    printf("enter elements of a:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
    for (i=0;i<n;i++){
        if(a[i]>a[i+1]){
            int c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        }
    }
    }
    printf("bubble sort...\n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
    return 0;
}