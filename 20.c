#include<stdio.h>
int main() {
    int a,b,operation;
    printf("enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    printf("enter operation =%d");
    scanf("%d",&operation);
    switch(operation)
    {   case 1: 
            printf("\n %d",a+b);
        break;
        case 2:
            printf("\n %d",a-b);
        break;
        case 3:
            printf("\n %d",a*b);
        break;
        case 4:
            printf("\n%d",a/b);
        break;
    }
    return 0;

}
    
    




