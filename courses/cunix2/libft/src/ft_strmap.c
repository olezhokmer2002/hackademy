#include "../tester/tests/libft.h"

//done
char *ft_strmap(char const *str, char (*f)(char))
{
    size_t length = ft_strlen(str);
    char *result = (char*)malloc(length + 1);
    for (size_t i = 0; i < length; i++)
    {
        result[i] = f(str[i]);
    }
    result[length] = '\0';
    return result;
}