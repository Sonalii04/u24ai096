#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n],max=0,smax=0,i;
    printf("enter integers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            smax=max;
            max=a[i];}
        else if(smax<a[i]&&a[i]<smax){
            smax=a[i];
        }
    }
    printf("maximum integer is:%d \n",max);
    printf("second maximum integer is:%d\n",smax);
    return 0;
}