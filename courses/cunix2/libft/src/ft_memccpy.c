#include "../tester/tests/libft.h"

//done
void *ft_memccpy(void *dest, const void *source, char ch, size_t count)
{
    if (dest == source)
    {
        return NULL;
    }
    else
    {
        char *destStr = (char *)dest;
        char *sourceStr = (char *)source;
        while (count--)
        {
            *destStr = *sourceStr;
            destStr++;
            if (*sourceStr == ch)
            {
                return destStr;
            }
            sourceStr++;
        }
        return NULL;
    }
}