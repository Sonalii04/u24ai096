#include<stdio.h>
int main(){
    char arr[100];
    fgets(arr,100,stdin);
    char *ptr = arr;
    int count=1;
    for ( int i=0;*(ptr +i)!='\0';i++){
        if(*(ptr+i)==' '){
            count++;
        }
    }
    printf(" no of words = %d",count);
    return 0;
}