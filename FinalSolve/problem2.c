#include <stdio.h>

int main(){

    char c;
    float length, width;

    scanf("%c", &c);
    scanf("%f %f", &length, &width);

    float result;

    switch(c){
    case 'A':
        result = length * width;
        printf("The area of the rectangle is: %f\n", result);
        break;
    case 'P':
        result = 2 * (length + width);
        printf("The perimeter of the rectangle is: %f\n", result);
        break;
    default:
        printf("Error: Please enter only 'A' or 'P'");
    }

    return 0;
}
