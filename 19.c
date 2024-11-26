#include<stdio.h>
//read a char and check whether it is small case letter or not using conditional operator
int main()
{
    char a;
    printf("enter a character :");
    scanf("%c",&a);
    a<='z' && a>='a'? printf("small case letter"):printf("not small case letter");
    return 0;
}