#include <stdio.h>

int main()
{

    double radius;
    scanf("%lf", &radius);
    double area = 2 * 3.14 * radius;

    printf("Area: %.2lf", area);

    return 0;
}