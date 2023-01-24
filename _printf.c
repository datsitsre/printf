#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
  *_printf - print data just like the regular printf function
  *@format: format %[width][field][type]
  *Return:  what is given the function
  */
int _printf(const char *format, ...)
{
	int (*p_funct)(va_list, flags_t *);
	const char *ptr;
	va_list arg;
	flags_t width = {0, 0, 0};

	register int count = 0;

	va_start(arg, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '%')
			{
			count += _putchar('%');
			continue;
			}
		while (get_flag(*ptr, &width))
			ptr++;

		p_funct = get_print(*ptr);
		count += (p_funct) ? p_funct(arg, &width) : _printf("%%%c", *ptr);
		}
		else
			count += _putchar(*ptr);
	}
	_putchar(-1);
	va_end(arg);
	return (count);
}
