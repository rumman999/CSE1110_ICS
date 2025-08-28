#include <stdio.h>

int a = 10;

int main()
{

    printf("A. Global: %d\n", a);
    
    int a = 20;
    printf("B. Local: %d\n", a);


    // The code below is not required for you guys for now
    {
        extern int a;  // explicitly refers to the global a 
        // C. Print the global again
        printf("C. Global: %d", a);
    }

    return 0;
}