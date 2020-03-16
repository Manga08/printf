#ifndef HOLBERTON_FILE
#define HOLBERTON_FILE
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct types - Struct op
 *
 * @pointer: The operator
 * @pointer: The pointer.
 * @f: The function associated
 */

typedef struct types
{
	char *pointer;

	void (*f)(va_list, char *, unsigned int *);
} cases;

int printf(const char *format, ...);
void p_char (va_list data, char *buffer, unsigned int *size);
void p_int(va_list data, char *buffer, unsigned int *size);


#endif
