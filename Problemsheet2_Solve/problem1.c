#include <stdio.h>

int main()
{

    int x, y;

    scanf("%d %d", &x, &y);

    printf("Addition: %d\n", x + y);
    printf("Subtraction: %d\n", x - y);
    printf("Multiplication: %d\n", x * y);
    printf("Quotient: %d\n", x / y);
    printf("Remainder: %d\n", x % y);

    /*
         try to print the following yourself and see what happens

         printf("Remainder: %d\n", -14%3);
         printf("Remainder: %d\n", -14%-3);

    */

    return 0;
}