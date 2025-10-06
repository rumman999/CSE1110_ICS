#include <stdio.h>

int main()
{

    char selection;
    float length, width;

    scanf("%c", &selection);
    scanf("%f %f", &length, &width);


    float result;


    switch(selection)
    {
    case 'A':
        result = length * width;
        printf("The area of the rectangle is: %f", result);
        break;
    case 'P':
        result = 2* (length + width);
        printf("The perimeter of the rectangle is: %f", result);
        break;
    default:
        printf("Only 'A' and 'P' are valid for selection type\n");
    }

}
