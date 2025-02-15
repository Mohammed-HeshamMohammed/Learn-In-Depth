#include "stdio.h"

int main()
{
	float x ,y ,mult=0;
	printf("Enter 2 Number:  ");
	scanf("%f %f" ,&x,&y);
	mult = x*y;
	printf("\nProduct: %f",mult);
	return 0;
}
