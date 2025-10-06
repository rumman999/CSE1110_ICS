#include <stdio.h>
#include <math.h>

int main()
{
    float E,m;

    scanf("%f %f", &E, &m);

    float c = sqrt(E/m);

    printf("%.3f\n", c);

}
