#include<stdio.h>
int main(){
    int n ,a=0,b=1;
    printf("no of terms in fibonacci series =" );
    scanf("%d",&n);
    printf("%d \n",a);
    printf("%d \n",b);
    while(b<=n)
    {
        a=a+b;
        printf("\n %d",a);
        b=a+b;
        printf("\n %d",b);
    }
    return 0;
}