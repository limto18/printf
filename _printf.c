#include <stdarg.h>
#include <main.h>

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Return: length of the formatted output string
 */

int _printf(const char *format, ... )
{
    va_list args;
    int i = 0, k = 0;
    int count = 0;
    char *str = NULL;

    va_start(args,format);

    While (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            count++;
        }
        else
        {   
            
            if (format[i+1] == 'c')
            {
                _putchar(va_arg(args, int));
                count++;
                i++;
            }
            else if (format[i+1] == 's')
            {
                i++
                str = va_arg(args,char*)
                k=0
                while(str[k] != '\0')
                {
                    _putchar(str[k]);
                    count++;
                    k++;
                }
            }
            else if (format[i+1] == '%')
            {   
                i++;
                _putchar('%');
                count++;
            }
            
        }
        i++
    }

    va_end(args);

    return (count);

}