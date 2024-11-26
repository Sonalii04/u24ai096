#include<stdio.h>
struct item{
    char item_name[100];
    int quantity;
    float price;
    float amount;
};
int main (){
    int n;
    printf("enter number of item's detail you want to enter :-");
    scanf("%d",&n);
    struct item item[n];
    for(int i=0;i<n;i++){
        
        printf("enter item name :-");
        scanf("%s",&(item[i].item_name));
        printf("enter quantity of item :-");
        scanf("%d",&(item[i].quantity));
        printf("enter price of item :-");
        scanf("%f",&(item[i].price));
        item[i].amount = item[i].price *item[i].quantity;
    }
    printf("item name   quantity        price           amount");
    for (int i=0;i<n;i++){
        printf("\n%s \t \t",item[i].item_name);
        printf("%d \t",item[i].quantity);
        printf("Rs %f \t ",item[i].price);
        printf("Rs %f \t ",item[i].amount);
    }
    return 0;
}