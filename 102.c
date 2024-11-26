#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    int count=0,countchar=0,countsen=0;
    char ch;
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch =fgetc(fptr);
        countchar++;
        if(ch==' '||ch=='\n'){
            count++;
        }
        if(ch=='\n'){
            countsen++;
        }
    }
    printf("\n");
    printf("total number of characters : %d\n ",(countchar-count));
    printf("total numbers of words : %d\n",count);
    printf("total number of sentence : %d\n",countsen);
    return 0;
    
}