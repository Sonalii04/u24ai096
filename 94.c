#include<stdio.h>
#include<string.h>
int main(){
    char arr1[100],arr2[100];
    fgets(arr1,100,stdin);
    char *ptr1= arr1;
    char *ptr2 = arr2;
    int x= strlen(arr1);
    for(int i=0;*(ptr1+i)!='\0';i++){
        *(ptr2 + i) = *(ptr1 + (x-i-1));
    }
    for(int i=0;*(ptr2+i)!='\0';i++){
        printf("%c \t",*(ptr2+i));
    }
    return 0;
}