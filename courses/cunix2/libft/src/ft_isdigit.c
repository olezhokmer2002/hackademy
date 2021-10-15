#include "../tester/tests/libft.h"

//done
int ft_isdigit(char ch)
{
    if((int)'0' <= ch && ch <= (int)'9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}