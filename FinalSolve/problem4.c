#include <stdio.h>


int main()
{

    int a, b, c, max;

    scanf("%d %d %d", &a, &b, &c);

    int x = (a+b*c);
    int y = (b+a*c);
    int z = (c+a*b);


    if(x>=y && x>=z)
    {
        max = x;
    }
    else if(y>=x && y>=z)
    {
        max = y;
    }
    else
    {
        max =z;
    }


    printf("Maximum value: %d\n", max);

}
