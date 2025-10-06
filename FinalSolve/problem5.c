#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);

    int lastDigit = n%10;

    int i;

    for(i=lastDigit; i<=9; i++){
        printf("%d",i);
    }

    printf("\n");
}
