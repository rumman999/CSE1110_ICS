#include <stdio.h>

int main()
{
    double num;

    scanf("%lf", &num);

    // (a) Right justified within 10 columns (default 6 decimal places for %f)
    printf("(a) Val:%10f\n", num);

    // (b) Right justified within 2 columns (will only show last 2 digits if number < 100, else print full number squished)
    printf("(b) Val:%2f\n", num);

    // (c) Rounded to two decimal places
    printf("(c) Val:%.2f\n", num);

    // (d) Rounded to integer (using %.0f, prints without decimals)
    printf("(d) Val:%.0f\n", num);      // because it says without type casting, we learned with type casting in the online class

    // (e) Exponential/scientific notation
    printf("(e) Val:%e\n", num);

    return 0;
}
