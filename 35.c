#include<stdio.h>
int main()
{ 
 int a,f=0,rem,s=0;
printf("enter a");
scanf("%d",&a);
while(a!=0)
{ rem=a%10;
f=f+rem;
a=a/10;
}
if(f>=10)
{
	while(f!=0)
	{ rem=f%10;
	s=s+rem;
	f=f/10;
	}
	printf("%d",s);
	
}
else
{ 
printf("%d",f);
}
return 0;
}