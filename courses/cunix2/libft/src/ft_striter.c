#include "../tester/tests/libft.h"

//done
void ft_striter(char *s, void (*f)(char *))
{
    while (*s != '\0')
    {
        f(s);
        s++;
    }
}