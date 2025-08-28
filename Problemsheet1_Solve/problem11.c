#include <stdio.h>

int main()
{
    unsigned int a;
    unsigned long int b;
    unsigned long long int c;
    unsigned short int d;

    // The suffixes U, UL, and ULL specify that the literal is unsigned int, unsigned long int, and unsigned long long int respectively to ensure correct type and prevent overflow.

    a = 4294967295U;
    b = 4294967295UL;
    c = 18446744073709551615ULL;
    d = 65535U;

    printf("The unsigned int value: %u\n", a);
    printf("The unsigned long int value: %lu\n", b);
    printf("The unsigned long long int value: %llu\n", c);
    printf("The unsigned short int value: %hu\n", d);

    return 0;
}
