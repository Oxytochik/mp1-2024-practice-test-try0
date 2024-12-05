// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
double max_of_two_numbers(double a, double b)
{
    if (a > b) {
        return a;
    }
    else
    {
        return b;
    }
    return 0;
}
