#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    printf("\n %d",a>b&&a>c);
    printf("\n %d",b>c&&b>c);
    printf("\n %d",c>a&&c>b);
    return 0;
}