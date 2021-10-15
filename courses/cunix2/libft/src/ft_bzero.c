#include "../tester/tests/libft.h"

//done
void ft_bzero(void *s, size_t n)
{
    char *result = (char *)s;
    while (n != 0 && result)
    {
        *result = '\0';
        result++;
        n--;
    }
}