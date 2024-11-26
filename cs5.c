//1<=t<=10^5
//1<=n<=10^10
#include<stdio.h>
#include<math.h>
int main(){
    long long int t,n;
    printf("number of test cases-");
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        long long int n;
        printf("enter n=");
        scanf("%lld",&n);
        long long int a=0,b=1,c;
        c=a+b;
        while(c<n){
            a=b;
            b=c;
            c=a+b;
        }
        if(c==n){
            printf("IsFibo\n");
        }
        else{
            printf("IsNotFibo\n");
        }

    }


   
    return 0;

}