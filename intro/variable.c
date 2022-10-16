#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int integerNumber;
    float precisionNumber;
    double largeFloat;
    char character;

    integerNumber = 10;
    precisionNumber = 3.4;
    largeFloat = 5.736;
    character = 't';

    printf("The intergerNumber is %d\n", integerNumber);
    printf("The float is %f\n", precisionNumber);
    printf("The double is %lf\n", largeFloat);
    printf("The character is %c\n", character);

    return 0;
}