#include "../tester/tests/libft.h"

//done
int ft_tolower(char ch)
{
    if (ch  >= (int)'A' && ch <= (int)'Z')
    {
        return ch - (int)'A' + (int)'a';
    }
    else
    {
        return ch;
    } 
}