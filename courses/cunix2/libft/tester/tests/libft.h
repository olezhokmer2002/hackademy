#include <stdlib.h>

int ft_abs(int val); 
void ft_bzero(void *s, size_t n); 
div_t ft_div(int numerator, int denominator);

int ft_isalpha(char ch);
int ft_isascii(int ch);
int ft_isdigit(char ch); 
int ft_isspace(char ch);

void *ft_memset(void *buf, char ch, size_t num);
void *ft_memcpy(void *dest, const void *source, size_t count);
void *ft_memccpy(void *dest, const void *source, char ch, size_t count);
void *ft_memmove(void *destination, const void *source, size_t n);
void *ft_memchr(const void *arr, char ch, size_t n);
int ft_memcmp(const void *buf1, const void *buf2, size_t count);

char *ft_strchr(char *str, char ch);
char *ft_strdup(const char *str);
int ft_strncmp(const char *string1, const char *string2, size_t num);
size_t ft_strlen(const char *s);
char *ft_strrchr(char *str, char ch);
char *ft_strstr(char *s1, char *s2);
char *ft_strnstr(char *s1, char *s2, size_t n);
void ft_striter(char *s, void (*f)(char *));
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s);
char **ft_strsplit(char const *s, char c);

int ft_tolower(char ch);
int ft_toupper(char ch);



void *ft_memset(void *buf, char ch, size_t num);
void *ft_memcpy(void *dest, const void *source, size_t count);
void *ft_memccpy(void *dest, const void *source, char ch, size_t count);
void *ft_memmove(void *destination, const void *source, size_t n);
void *ft_memchr(const void *arr, char ch, size_t n);
int ft_memcmp(const void *buf1, const void *buf2, size_t count);
