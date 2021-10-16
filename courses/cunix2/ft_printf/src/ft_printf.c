#include "libftprintf.h"


void ft_printf(char *format, ...)
{
    va_list arg;
    va_start(arg, format);
    char *str = format;
    while(*str != '\0')
    {
        for(str = str; *str != '%'; str++) write(1, &*str, 1);
        if (*str == '\0') break;
        str++;
        char *s, ch;
        int tmp, nulls = 0, rightSpaces = 0, leftSpaces = 0; 
        int plus = 0, minus = 0, length = 0, space = 0;
        if(*str == '+')
        {
            plus = 1;
            str++;
        }
        else if(*str == ' ')
        {
            space = 1;
            str++;
        }
        if(*str == '-')
        {
            while (my_isdigit(*str))
            {
                rightSpaces = rightSpaces * 10 + (*str - '0');
                str++;
            }
        }
        else if(*str == '0')
        {
            str++;
            while (my_isdigit(*str))
            {
                nulls = nulls * 10 + (*str - '0');
                str++;
            }
        }

        while (my_isdigit(*str))
        {
            leftSpaces = leftSpaces * 10 + (*str - '0');
            str++;
        }

        if(*str == 's')
        {
            s = va_arg(arg, char *);
            if (s == NULL) s = "(null)";
            length = my_strlen(s);
        }
        else if(*str == 'd')
        {
            tmp = va_arg(arg, int);
            if(tmp < 0) minus = 1;
            s = my_itoa(tmp);
            length = my_strlen(s);
        }
        else if(*str == 'c')
        {
            ch = va_arg(arg, int);
            s = &ch;
            length = 1;
        }
        else if(*str == 'i')
        {
            tmp = va_arg(arg, int);
            if(tmp < 0) minus = 1;
            s = my_itoa(tmp);
            length = my_strlen(s);
        }
        else if(*str == '%')
        {
            ch = '%';
            rightSpaces = leftSpaces = 0;
            nulls = 0;
            s = &ch;
            length = 1;
        }

        length += minus + plus + space;
        if(nulls > length) nulls = nulls - length;
        else nulls = 0;
        if(rightSpaces > length) rightSpaces = rightSpaces - length;
        else rightSpaces = 0;
        if(leftSpaces > length) leftSpaces = leftSpaces - length;
        else leftSpaces = 0;

        int counter = 0;
        if (nulls == 0 && leftSpaces != 0)
        {
            while(counter++ != leftSpaces) write(1, " ", 1);
            counter = 0;
            leftSpaces = 0;
        }

        if (minus) write(1, "-", 1);
        else
        {
            if (plus)
            {
                write(1, "+", 1);
                length++;
            }
        }

        if (minus == 0 && plus == 0 && space == 1) write(1, " ", 1);
        while(counter++ != nulls) write(1, "0", 1);
        counter = 0;
        nulls = 0;
        while(counter++ != leftSpaces) write(1, " ", 1);
        counter = 0;
        leftSpaces = 0;
        write(1, s, my_strlen(s));
        while(counter++ != rightSpaces) write(1, " ", 1);
        rightSpaces = 0;
        str++;
    }
    va_end(arg);
}