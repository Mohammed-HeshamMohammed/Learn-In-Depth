#include <stdio.h>

int main()
{
	float x,y;
	char op;
	printf("Enter the Operation you need along with numbers");
	scanf("%f\t\t%c\t\t%f",&x,&op,&y);
	switch (op)
	{
	case '+':
		printf("\n\t%f + %f = %f",x,y,x+y);
		break;
	case '-':
		printf("\n\t%f - %f = %f",x,y,x-y);
		break;
	case '*':
		printf("\n\t%f * %f = %f",x,y,x*y);
		break;
	case '/':
		printf("\n\t%f / %f = %f",x,y,x/y);
		break;
	}
	return 0;
}
