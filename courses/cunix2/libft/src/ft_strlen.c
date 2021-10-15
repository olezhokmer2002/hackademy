#include "../tester/tests/libft.h"

//done
size_t ft_strlen(const char *str)
{
    int len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}