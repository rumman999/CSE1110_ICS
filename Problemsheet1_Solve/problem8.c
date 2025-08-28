#include <stdio.h>

int main()
{
    
    int first, last;

    scanf("%d", &first);
    scanf("%*d");
    scanf("%d", &last);

    printf("First Value = %d, ", first);
    printf("Last Value = %d\n", last);

    return 0;
}