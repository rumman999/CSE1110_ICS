#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int mul = x;
    mul *= y;

    int div = x;
    div /= y;

    printf("Multiplication: %d\n", mul);
    printf("Division: %d\n", div);

    return 0;
}
