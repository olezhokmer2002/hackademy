#include "../tester/tests/libft.h"

//done
int ft_isascii(int ch)
{
    if(0 <= ch && ch < 128)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}