#include<stdio.h>
struct employee{
    char empname[100];
    int empno;
    float basicpay;

};
int main(){
    int n;
    printf("enter number of employee detail u want to enter=");
    scanf("%d",&n);
    struct employee emp[n];
    struct employee *ptr;
    ptr=emp;
    for(int i=0;i<n;i++){
        
        printf("details of employee %d\n",i+1);
        printf("enter employee number= \n");
        scanf("%d",&((*(ptr+i)).empno));
        printf("enter employee name=\n");
        scanf("%s",&((*(ptr+i)).empname));
        printf("enter basicpay=\n");
        scanf("%f",&((*(ptr+i)).basicpay));
    }
    for(int i=0;i<n;i++){
        printf("Details of employee %d\n",i+1);
        printf("employee number : %d\n",(*(ptr+i)).empno);
        printf("employee name : %c\n",(*(ptr+i)).empname);
        printf("basicpay of employee : %f\n",(*(ptr+i)).basicpay);
    }
}