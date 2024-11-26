#include<stdio.h>
int reverse(int a[],int n);
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of a:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);    
    }
    printf("%d",reverse(a,n+1));
    return 0;
}
int reverse (int a[],int n){
    for(int i=0;i<((n+1)/2);i++){
        int firstval=a[0];
        int secondval=a[n-i-1];
        a[i]=secondval;
        a[n-i-1]=firstval;
}
}
