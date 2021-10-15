#include "../tester/tests/libft.h"

//done
int ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
    unsigned char *first = (unsigned char *)buf1;
    unsigned char *second = (unsigned char *)buf2;
    int result = 0;
    for (size_t i = 0; i < count; i++)
    {
        if (first[i] != second[i])
        {
            result = ((int)first[i] - (int)second[i]);
            break;
        }
    }
    return result;
}