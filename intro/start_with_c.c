#include <stdio.h> // import stardard library

#define MAX_AGE 23.3

/**
 * main - Entry point of my program
 *
 * Return: 0 Always (Successful)
 *
 */
int main(void)
{
    int userAge;
    printf("Enter your age:");
    scanf("%d", &userAge);

    if (MAX_AGE > userAge)
    {
        printf("Your age is %d within the age range of %lu", userAge, MAX_AGE);
    }
    else
    {
        printf("Your age is %d and is greater than %lu", userAge, MAX_AGE);
    }
    return 0;
}