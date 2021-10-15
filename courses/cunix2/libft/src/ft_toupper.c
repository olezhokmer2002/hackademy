#include "../tester/tests/libft.h"

//done
int ft_toupper(char ch)
{
    if (ch >= (int)'a' && ch <= (int)'z')
    {
        return ch - (int)'a' + (int)'A';
    }
    else
    {
        return ch;
    }
}