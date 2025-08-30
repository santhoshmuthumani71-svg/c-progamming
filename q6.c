#include<stdio.h>
int main()
{
	float number;	

	printf("enter a fractional number:");
	scanf("%f", &number);

	printf("formatted number: %2fn\n",number);
	return 0;
}