#include "../tester/tests/libft.h"

//done
void *ft_memmove(void *dest, const void *source, size_t n)
{
    char *destStr= (char *)dest;
    char *sourceStr = (char *)source;
    char *helpStr = (char *)malloc(n + 1);
    for (size_t i = 0; i < n; i++)
    {
        helpStr[i] = sourceStr[i];
    }
    helpStr[n] = '\0';
    for (size_t i = 0; i < n; i++)
    {
        destStr[i] = helpStr[i];
    }
    free(helpStr);
    return (void *)destStr;
}