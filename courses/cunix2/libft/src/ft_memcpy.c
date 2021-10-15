#include "../tester/tests/libft.h"

//done
void *ft_memcpy(void *dest, const void *source, size_t count)
{
    if (dest == source)
    {
        return NULL;
    }
    else
    {
        char *destStr = (char *)dest;
        char *sourceStr = (char *)source;

        for (size_t i = 0; i < count; i++)
        {
            destStr[i] = sourceStr[i];
        }

        return (void *)destStr;
    }
}