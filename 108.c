#include<stdio.h>
int main(){
    char str1[10],strcp[10],strcon[10],strrev[10],str2[10];
    int n;
    printf("enter string:-");
    fgets(str1,10,stdin);
    for(int i=0;str1[i]!='\0';i++){
        n++;
    }
    
    for(int i=0;(str1[i])!='\0';i++){
        strcp[i]=str1[i];
    }
    printf("copied string is : %s",strcp);
    fgets(strcon,10,stdin);
    int x=0,y=0;
    for(int i=0;strcon[i]!='\0';i++){
        x++;
    }

    printf("%d", x);
    for (int i = x; i < (n+x); i++)
    {
        strcon[i]=str1[i-x];
    }
    printf("concatenated string :- %s",strcon);
    
    printf("enter string 3 :-");
    fgets(str2,10,stdin);
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            y=str1[i]-str2[i];
            break;
        }
    }
    printf("result of comparison :- %d",y);
    
    for (int i = 0; i <n; i++)
    {
        strrev[i]=str1[n-i-1];
    }
    printf("reversed string is :- %s",strrev);
    
    
    
    
    return 0;
}
