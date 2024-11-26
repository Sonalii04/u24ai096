#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("LNMITSTUDENT.JAVA","a");
    int roll_no;
    char name[100];
    int marks;
    int n;
    printf("enter number of student's detail you want to enter:-");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("roll no :-");
        scanf("%d",&roll_no);
        printf("name :-");
        scanf("%s",&name);
        printf("marks :-");
        scanf("%d",&marks);
        fprintf(fptr,"%d \t\t\t",roll_no);
        fprintf(fptr,"%s \t\t",name);
        fprintf(fptr,"%d \n",marks);

    }
    fclose(fptr);
    return 0;
}