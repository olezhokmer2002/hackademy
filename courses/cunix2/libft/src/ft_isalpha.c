#include "../tester/tests/libft.h"

//done
int ft_isalpha(char ch)
{
    if(((int)'a' <= ch && ch <= (int)'z') || ((int)'A' <= ch && ch <= (int)'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}