#include "main.h"
#include <stdio.h>
/* 
 * main - to print positive or negative numbers
 * Return: 0 for zero 1 for positive and -1 for negative
 */
int positive_or_negative(int n)
{
        if (n > 0)
        {
                printf("%d is positive\n", n);
                return (1);
        }
        else if (n == 0)
        {
                printf("%d is Zero\n", n);
                return (0);
        }
        else
        {
                printf("%d is negative\n", n);
                return (-1);
        }
}
