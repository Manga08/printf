#include "holberton.h"
/**
 * _printf - Entry point
 * @format: the format
 */
void _printf(const format, ...)
{
	char *coma = "";
	va_list data;
	unsigned int c1 = 0, c2 = 0;

	pr_t ops[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
		{NULL, NULL}
	};
}
