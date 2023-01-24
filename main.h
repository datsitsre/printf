#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
  *struct flags - struct for flags
  *@plus: '+'
  *@space: ' ' 
  *@hash: '#'
  */
typedef struct flags
{
	int space;
	int plus;
	int hash;
}flags_t;


/**
  *struct printHandler - struct for function of forma
  *@c: format specifier
  *@f: ptr to function format
  */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
}print_hand;


/* print main function */
int _printf(constant char *format, ...);

/* print bases */
int print_octal(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_hex_big(valit l, flags_t *f);
int print_hex(va_list l, flags_t *f);

/* print  number */
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f); 
int count_digit(int i);

/* conv */
int *convert(unsigned long int num, int base, int lowercase);

/* get print */
int (*get_print(char s)(va_list, flags_t *f);

/* get flag */
int get_flag(char s, flags_t *f);

/* print alpha */
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/* write funCS */
int _putchar(char c);
int _puts(char *str);

/* print custom function */
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_big(va_list l, flags_t *f);

/* print address */
int print_address(va_list l, flags *f);

/* print percent */
int print_percent(va_list l, flags *f);

#endif
