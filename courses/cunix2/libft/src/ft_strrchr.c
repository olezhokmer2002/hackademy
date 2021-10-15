#include "../tester/tests/libft.h"

//done
char *ft_strrchr(char *str, char ch)
{
    char *result = NULL;
    while (*str != '\0')
    {
        if ((int)*str == ch) result = str;
        str++;
    }
    if ((int)*str == ch) result = str;
    return result;
}