#include<stdio.h>
#include<math.h>
int main()
{ int a,b,power;
printf("enter a");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
power=1;
for(int i =1;i<=b;i++){
    power = power*a;
}
printf("%d",power);
return 0;
}