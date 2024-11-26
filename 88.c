#include<stdio.h>
int main(){
    int n;
    printf("enter number of elements you want to enter=");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    int *ptr1= arr1;
    int *ptr2 = arr2;
    printf("enter elements = ");
    for ( int i=0 ;i<n;i++){
        scanf("%d",&(*(ptr1+i)));
    }
    for(int i=0;i<n;i++){
        *(ptr2 + i) = *(ptr1 + i);
    }
    for(int i=0;i<n;i++){
        printf("%d \t",*(ptr2+i));
    }
    return 0;
    
    

}