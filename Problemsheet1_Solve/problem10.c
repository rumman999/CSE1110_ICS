#include <stdio.h>

int main()
{
    long int a;
    long long int b;
    long double c;
    short int d;

    // The suffixes L and LL specify a literal as long int and long long int respectively to ensure the literal’s type matches the variable and prevents overflow.
   
    a = 2147483647L;
    b = 9223372036854775807LL;
    c = 1.1e4932L;
    d = 32767;

    printf("The long int value: %ld\n", a);
    printf("The long long int value: %lld\n", b);
    printf("The long double value: %.1Le\n", c);
    printf("The short int value: %hd\n", d);

    return 0;
}
