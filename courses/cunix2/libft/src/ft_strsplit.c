#include "../tester/tests/libft.h"

//done
char **ft_strsplit(const char *str, char divider)
{
    size_t length = ft_strlen(str);
    size_t parts = 0;
    for (size_t i = 1; i < length; i++)
        if (str[i] != divider && str[i - 1] == divider)
            parts++;
    if (length && str[0] != divider) parts++;
    char **result = malloc((parts + 1) * sizeof(char *));
    size_t previous = 0, current = 0;
    for (size_t i = 0; i < length; i++)
    {
        if (str[i] == divider)
        {
            if (i == previous)
            {
                previous++;
                continue;
            } 
            else
            {
                result[current] = malloc(i - previous + 1);
                for (size_t j = previous; j < i; j++)
                    result[current][j - previous] = str[j];
                result[current][i - previous] = '\0';
                previous = i + 1;
                current++;
            }
        }
    }
    if (previous != length)
    {
        result[current] = malloc(length - previous + 1);
        for (size_t i = previous; i < length; i++)
            result[current][i - previous] = str[i];
        result[current][length - previous] = '\0';
        current++;
    }
    result[current] = NULL;
    return result;
}