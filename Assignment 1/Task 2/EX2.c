
#include "stdio.h"

int main()
{
	char c ,v[10]="aeiouAEIOU";
	int s;
	printf("PLease enter an alphabet: ");
	scanf("%c",&c);
	for (int i = 0 ; i < 10; i++)
	{
		if(c == v[i])
		{
		 s = 1;
		 break;
		}
	}
	if (s)
	{
		 printf("\n %c is a vowel",c);
	}
	else
	{
		 printf("\n %c is not a vowel",c);
	}
}

