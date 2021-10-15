#include "../tester/tests/libft.h"

//done
int ft_isspace(char ch)
{
    if(ch == ' ' || ch == '\t' || ch == '\v' || ch == '\n' || ch == '\f' || ch == '\r')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}