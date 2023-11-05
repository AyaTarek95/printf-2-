#include "main.h"
/**
 *
 *
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 *
 *
 *
 */
int print_s(va_list args)
{
	int i = 0, byteswritten = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		byteswritten += write(1, &str[i], 1);
		i++;
	}	
	return byteswritten;
}

/**
 *
 *
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
		return (*str);
return (*str);
}
