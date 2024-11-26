#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("LNMITSTUDENT.dat","a");
    char ch[100];
    printf("enter information :-");
    gets(ch);
    fprintf(fptr,"%s",ch);
    fclose(fptr);
    return 0;
}