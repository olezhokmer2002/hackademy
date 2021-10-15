#include "../tester/tests/libft.h"

//done
char *ft_strjoin(char const *str1, char const *str2)
{
    if (str1 == NULL && str2 == NULL) return NULL;
    else if (str1 == NULL) return (char *)str2;
    else if (str2 == NULL) return (char *)str1;

    size_t first = ft_strlen(str1);
    size_t second = ft_strlen(str2);
    size_t length = first + second + 1;
    char *result = (char *)malloc(length);

    for (size_t i = 0; i < first; i++) result[i] = str1[i];
    for (size_t i = first; i < length - 1; i++) result[i] = str2[i - first];
    result[length - 1] = '\0';
    return result;
}