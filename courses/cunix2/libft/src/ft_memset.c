#include "../tester/tests/libft.h"

//done
void *ft_memset(void *buffer, char ch, size_t num)
{
    char *str = (char *)buffer;
    for (size_t i = 0; i < num; i++)
    {
        str[i] = ch;
    }
    return (void *)str;
}