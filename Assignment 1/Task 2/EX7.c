
#include <stdio.h>

int main()
{
	int x,fac=1;
	printf("Enter an Integer: ");
	scanf("%d",&x);
	while(x <= 0)
	{
		if (x == 0)
		{
			printf("You Entered a Zero");
		}
		else
		{
			printf("You Entered a Negative Number");
		}
		printf("Enter an Integer: ");
		scanf("%x",&x);
	}
	for(int i = 1 ;i <= x;i++)
	{
		fac*=i;
	}
	printf("\nFactorial %d",fac);
}


/*
#include <stdio.h>

int main() {
    int x, fac = 1;

    do {
        printf("Enter a positive integer: ");
        scanf("%d", &x);

        if (x < 0) {
            printf("You entered a negative number. Try again.\n");
        } else if (x == 0) {
            printf("Factorial of 0 is 1.\n");
        }

    } while (x < 0);
    for (int i = 1; i <= x; i++) {
        fac *= i;
    }
    printf("\nFactorial of %d is %d\n", x, fac);

    return 0;
}
*/
