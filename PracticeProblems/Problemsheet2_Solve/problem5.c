#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    // Incrementing the value of x (without saving it to x)\

    int incremented_value = x;
    incremented_value += y;
    
    printf("Incremented Value: %d\n", incremented_value);


    // Decrementing the value of x (without saving it to x)
    
    int decremented_value = x;
    decremented_value -= y;

    printf("Decremented Value: %d\n", decremented_value);

    // First sample output in the problem sheet is wrong

    return 0;
}
