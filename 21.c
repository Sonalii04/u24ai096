#include<stdio.h>
//program to read 2 numbers and perform specific task using switch case
int main()
{
    int p,q;
    char task;
    printf("enter operation to be performed:");
    scanf("%c",&task);
    printf("enter p and q=");
    scanf("%d",&p,&q);
    switch(task)
    {
        case 'a':
        printf("addition of p and q=%d",p+q);
        break;
        
        case 'b':
        printf("subtraction of p and q=%d",p-q);
        break;

        case 'c':
        printf("product of p and q=",p*q);
        break;

        case 'd':
        printf("division of p and q=",p/q);
        break;

        case 'e':
        printf("remainder of p and q=",p%q);
        break;

        default:
        printf("sorry, this operation is not available !!");

    }
    return 0;
}