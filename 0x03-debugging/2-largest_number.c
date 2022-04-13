#include "main.h"

/**
 * largest_number - returns the largest of 3 numberrs
 * @a: firsrt interger
 * @b: second interger
 * @c: thrid interger 
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else 
{
largest = c;
}
return (largest);
}
