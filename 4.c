#include<stdio.h>
int main(){
	float f;
	printf("temp in fahrenheit \n");
	scanf("%f",&f);
	printf("temp in celcius:%f", (f-32)/1.8);
	return 0;
	
}