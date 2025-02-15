
#include <stdio.h>

int main()
{
	unsigned int x,sum;
	int i;
	printf("Enter an Integer");
	scanf("%d",&x);
	for(i = 0;i <= x;i++)
	{
		sum +=i;
	}
	printf("sum = %d ",sum);
}

