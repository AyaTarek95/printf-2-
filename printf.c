#include "main.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
if (format != NULL)
{

	int byteswritten = 0, i;
	int (*func_pointer)(va_list);

	va_list args;
	/*va_list is a data type provided by stdarg.h*/
	va_start (args, format);
	/*iterate through format string*/
	i = 0;
	/*check wether the string is only %*/
	if (format[0] == '%' && format[1] == '\0')
	{
		return -1;
	}
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if(format[i+1] == '%')
			{
				byteswritten += write(1, &format[i+1], 1);
				i+= 2;
			}
			else
			{
				func_pointer = get_func(format[i+1]);
				if (func_pointer)
				{		
					byteswritten += func_pointer(args);
				}
				else

				{
					byteswritten += write(1, &format[i], 1);
					byteswritten += write(1, &format[i+1], 1);
					/*print format i & i+1 or only i+1 ??*/
				}
				i+= 2;
			}
		}
		else
		{
			byteswritten += write(1, &format[i], 1);
			i++;
		}
	}
	
	va_end(args);
	return byteswritten;
}
return -1;
}
