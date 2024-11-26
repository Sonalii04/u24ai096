#include<stdio.h>
int palindrome(int a);
int main(){
    int n;
    printf("entr n=");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}
int palindrome(int a){
    int c,rem,rev=0;
    c=a;
    while(a!=0){
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    if(rev==c){
        printf("%d is palindrome",c);
    }
    else{
        printf("%d is not palindrome",c);
    }
    return 0;
}