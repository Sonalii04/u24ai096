#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("enter number of strings you want to enter=");
    scanf("%d",&n);
    char str[n][30],*ptr[n];
    printf("enter strings :");
    for (int i=0;i<=n;i++){
        gets(str[i]);
        ptr[i]=str[i];
    }
    char *temp;
    for(int j=0;j<n;j++){
        for (int i=0;i<n;i++){
            if((strcmp(str[i],str[i+1]))>0){
                temp = ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=temp;
            }
        }
    }
    for (int i=0;i<=n;i++){
        printf("%s \n",(*(ptr+i)));
    }
    return 0;
}
