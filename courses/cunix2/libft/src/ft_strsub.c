#include "../tester/tests/libft.h"

//done
char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    if (s == NULL)
    {
        return NULL;
    }
    else
    {
        size_t length = ft_strlen(s);
        if(length < start)
        {
            start = length;
        }
        if(len < length - start)
        {
            len = length - start;
        }
        char *result = (char *)malloc(len + 1);
        for (size_t i = start; i < start + len; i++)
        {
            result[i - start] = s[i];
        }
        result[len] = '\0';
        return result;
    }
    
}