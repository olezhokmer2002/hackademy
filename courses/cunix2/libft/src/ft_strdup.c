#include "../tester/tests/libft.h"

//done
char *ft_strdup(const char *str)
{
    int len = ft_strlen(str);
    char *result = malloc(len + 1);
    for (int i = 0; i < len; i++)
    {
        result[i] = str[i];
    }
    result[len] = '\0';
    return result;
}