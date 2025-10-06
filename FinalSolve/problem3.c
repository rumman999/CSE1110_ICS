#include <stdio.h>


int main()
{

    int a, b, c, max;

    scanf("%d %d %d", &a, &b, &c);


    if(a >= b && a>=c)
    {
        max = a;
    }
    else if(b>=a && b>=c)
    {
        max = b;
    }
    else
    {
        max =c ;
    }

    if(max %2==0 && max %3 ==0)
    {
        printf("Purple number\n");
    }
    else if(max %2==0)
    {
        printf("Red number\n");
    }
    else if(max%3==0)
    {
        printf("Blue number\n");
    }
    else
    {
        printf("White number\n");
    }

}
