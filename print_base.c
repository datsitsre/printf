#include "main.h"

/**
  *print_hex - print a hex number
  *@l: va args to printf
  *@f: ptr struct
  *Return: printed char
  */
int print_hex(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert(n, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
  *print_hex_big - print hex base
  *@l: va_list arg from printf
  *@f: ptr to struct
  *Return:  0
  */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
  *print_binary - print num in base 2
  *@l: va_list arg
  *@f: ptr to struct
  *Return:0
  */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
  *print_octal - base 8
  *@l: va_list arg
  *@f: ptr struct
  *Return: 0
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
