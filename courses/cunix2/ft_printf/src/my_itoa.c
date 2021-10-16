#include <stdio.h>
#include <stdlib.h>
#include "libftprintf.h"

char *my_itoa(int val)
{
    unsigned int num = val < 0 ? -val : val;
    char buffer[32];
    int i = 0;
    do buffer[i++] = num % 10 + '0';
    while ((num /= 10) > 0);
    char *result = malloc(i + 1);
    for (int j = i - 1; j >= 0; j--) result[i - j - 1] = buffer[j];
    result[i] = '\0';
    return result;
}
