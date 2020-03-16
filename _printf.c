#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format
 *Return: the size
 */
int _printf(const char *format, ...)
{
	char *buffer = malloc(2048);
	va_list data;
	unsigned int cf = 0, ca = 0, m = 0, *size = 0;
	cases porcentage[] = {
		{'c', p_char},
		{'i', p_int},
		{'s', p_str},
		{'d', p_dec},
		{'%', p_por},
		{0, NULL}
	};
	size = &m;
	va_start(data, format);
	while (format[cf])
	{
		if (format[cf] == '%')
		{
			cf++;
			ca = 0;
			while (porcentage[ca].pointer)
			{
				if (format[cf] == porcentage[ca].pointer)
				{
					porcentage[ca].f(data, buffer, size);
				}
				ca++;
			}
		}
		else
		{
			buffer[*size] = format[cf];
			*size += 1;
		}
		cf++;
	}
	write(1, buffer, *size);
	va_end(data);
	free(buffer);
	return (*size);
}
