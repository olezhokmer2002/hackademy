#include "../tester/tests/libft.h"

//done
div_t ft_div(int numerator, int denominator)
{
    div_t result = {numerator / denominator, numerator % denominator};
    return result;
}