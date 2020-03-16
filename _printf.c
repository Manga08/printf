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
	unsigned int cf = 0, ca = 0;
	unsigned int *size;
	cases porcentage[] = {
		{"c", p_char},
		/*{"s", p_str},*/
		/*{"d", p_decimal},*/
		{"i", p_int},
		{NULL, NULL}
	};
	va_start(data, format);
	size = malloc(sizeof(int));
	*size = 0;
	if (format == NULL)
		return (1);
	while (format[cf])
	{
		if (format[cf] == '%')
		{
			cf++;
			ca = 0;
			while (ca < 2)
			{
				if (format[cf] == porcentage[ca].pointer[0])
					porcentage[ca].f(data, buffer, size);
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
	free(buffer);
	free(size);
	return (*size);
}
