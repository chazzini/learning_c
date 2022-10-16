/*
 * Program to print the precision
 * of the same values for
 * varing datatype in c
 * and not the output of the program
 *
 */
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *
 * Return: 0 Always
 */
int main(void)
{
    float floatingNumber;
    double dobuleNumber;
    long double longDoubleNumber;
    int integerNumber;
    short int shortInt;

    // print at the size of each datatype
    printf("the size of int is %d\n", sizeof(int));
    printf("the size of short int is %d\n", sizeof(short int));
    printf("the size of float is %f\n", sizeof(float));
    printf("the size of double is %lf\n", sizeof(double));
    printf("the size of long double is %lf\n", sizeof(long double));

    // set the value of each to a the value of 2/3
    floatingNumber = 2.0 / 3.0;
    integerNumber = 2.0 / 3.0;
    dobuleNumber = 2.0 / 3.0;
    longDoubleNumber = 2.0 / 3.0;
    shortInt = 2.0 / 3.0;

    // print the precision  to 4
    printf("Precision of 2/3 in int %d\n", integerNumber);
    printf("Precision of 2/3 in short int %d\n", integerNumber);
    printf("Precision of 2/3 in float %1.4f\n", floatingNumber);
    printf("Precision of 2/3 in float %1.4lf\n", dobuleNumber);
    printf("Precision of 2/3 in float %1.4Lf\n\n", longDoubleNumber);
    // print the precision  to 10
    printf("Precision of 2/3 in int %d\n", integerNumber);
    printf("Precision of 2/3 in short int %d\n", integerNumber);
    printf("Precision of 2/3 in float %1.10lf\n", floatingNumber);
    printf("Precision of 2/3 in float %1.10lf\n", dobuleNumber);
    printf("Precision of 2/3 in float %1.10Lf\n\n", longDoubleNumber);
}