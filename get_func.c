#include "main.h"
/**
 *
 *
 */
int (*get_func(char x))(va_list args)
{
	int i = 0;

	functions array[] =
		{
			{"s", print_s},
			{"c", print_c},
			{"%", print_percent},
			{NULL, NULL}
		};
	while(array[i].valid)
	{
		if (x == array[i].valid[0])
		return (array[i].f);
			i++;
	}

return NULL;
}
