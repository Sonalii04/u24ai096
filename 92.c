#include<stdio.h>
int main(){
    int n;
    printf("enter number of integers u want to enter=");
    scanf("%d",&n);
    int num[n];
    printf("enter integers =");
    int *ptr = num;
    for(int i =0;i<n;i++){
        scanf("%d",&(*(ptr+i)));
    }
    int max=0;
    for (int i=0;i<n;i++){
        if ((*ptr +i)>max){
            max= *(ptr+i);
        }
    }
    printf("biggest of n integers is =%d",max);
    return 0;
}
