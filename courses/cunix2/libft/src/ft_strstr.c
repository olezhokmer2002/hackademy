#include "../tester/tests/libft.h"

//done
char *ft_strstr(char *str1, char *str2)
{
    size_t first = ft_strlen(str1);
    size_t second = ft_strlen(str2);

    for (size_t i = 0; i + second <= first; i++)
    {
        int done = 1;
        for (size_t j = 0; j < second; j++)
        {
            if (str1[i + j] != str2[j])
            {
                done = 0;
                break;
            }
        }
        if (done) return (str1 + i);

    }
    return NULL;
}