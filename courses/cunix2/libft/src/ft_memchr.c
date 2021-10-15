#include "../tester/tests/libft.h"

//done
void *ft_memchr(const void *arr, char ch, size_t n)
{
    char *str = (char *)arr;
    for (size_t i = 0; i < n; i++)
        if (str[i] == ch)
            return (str + i);
    return NULL;
}