#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    int count=0;
    char ch;
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch =fgetc(fptr);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
        }
    }
    printf("\n");
    printf("%d",count);
    return 0;
    
}