#include "../tester/tests/libft.h"

//done
char *ft_strtrim(char const *s)
{
    if (s == NULL)
    {
        return NULL;
    }
    else
    {
        size_t length = ft_strlen(s);
        size_t leftSpacePos = 0;
        size_t rightSpacePos = length;
        for (size_t i = 0; i < length && ft_isspace(s[i]) == 1; i++)
        {
            leftSpacePos++;
        }

        for (size_t i = length; i > leftSpacePos && ft_isspace(s[i - 1]) == 1; i--)
        {
            rightSpacePos--;
        }
        char *result = malloc(rightSpacePos - leftSpacePos + 1);

        for (size_t i = leftSpacePos; i < rightSpacePos; i++)
        {
            result[i - leftSpacePos] = s[i];
        }
        result[rightSpacePos - leftSpacePos] = '\0';
        return result;
    }
}