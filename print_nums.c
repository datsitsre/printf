#include "main.h"

/**
  *print_int - print integer
  *@l: valist of arg
  *@f: ptr to struct
  *Return:0
  */
int print_int(va_list l, flags_t *f)
{

	int n = va_arg(l, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
  *print_unsigned - prints an unsigned integer
  *@l: va_list of argument
  *@f: ptr function
  *Return: 0
  */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
  *print_number - loop number
  *@n: integer
  *Return:0
  */
void print_number(int n)
{
	unsigned int num_1;

	if (n < 0)
	{
		_putchar('-');
		num_1 = -n;
	}
	else
		num_1 = n;


	if (num_1 / 10)
		print_number(num_1 / 10);
	_putchar((num_1 % 10) + '0');
}

/**
  *count_digit -  returns number
  *@i: integer
  *Return:0
  */
int count_digit(int i)
{
	unsigned int dig = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = 1;

	while (u != 0)
	{
		u /= 10;
		dig++;
	}
	return (dig);
}
