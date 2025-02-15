
#include <stdio.h>

int main() {
    int x;

    printf("Enter a Number: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("Number is negative.\n");
    }
    else if (x > 0)
    {
        printf("Number is positive.\n");
    }
    else {
        printf("It's a zero.\n");  // Fixed zero handling
    }
    return 0;
}

