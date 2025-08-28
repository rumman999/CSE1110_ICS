#include <stdio.h>
#include <math.h>  // Include math.h for pow()

int main()
{
    double a, b;

    scanf("%lf %lf", &a, &b);

    // Use pow() function from math.h for exponents
    double X = (3.31 * pow(a, 2) + 2.01 * pow(b, 3)) / (7.16 * pow(b, 2) + 2.01 * pow(a, 3));

    printf("X = %f", X);

    return 0;
}


/*
    https://www.w3schools.com/c/c_ref_math.php

    Visit this website and learn more about math.h
    You don't need everything,
    for now just learn how pow() and sqrt() works
*/