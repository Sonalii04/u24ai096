#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a[n],max=0,smax;
    printf("enter number");
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else if(smax>a[i]&&a[i]<smax){
            smax=a[i];
        }
    }
    printf("maximum int is =%d",max);
    printf("second maximum is =%d",smax);
    return 0;

}