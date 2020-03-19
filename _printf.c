#include "holberton.h"
/**
 * _printf - The printf main function
 * @format: the recieve format
 * Return: the size
 */
int _printf(const char *format, ...)
{
	char *buffer = malloc(2048);
	va_list data;
	unsigned int cf = 0, ca = 0, m = 0, *size = &m;
	cases porcentage[] = {
		{'c', p_char}, {'i', p_int}, {'s', p_str}, {'d', p_int},
		{'%', p_por}, {'u', p_unsig}, {'x', p_unsig}, {'X', p_unsig},
		{0, NULL}
	};
	if (!buffer || !format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(data, format);
	for (; format[cf]; cf++)
	{
		if (format[cf] == '%')
		{
			cf++;
			for (ca = 0; porcentage[ca].pointer; ca++)
			{
				if (format[cf] == porcentage[ca].pointer)
				{
					porcentage[ca].f(data, buffer, size);
					break;
				}
			}
			if (format[cf] != porcentage[ca].pointer)
			{
				buffer[*size] = format[cf - 1];
				*size += 1;
				buffer[*size] = format[cf];
				*size += 1;
			}
		}
		else
		{
			buffer[*size] = format[cf];
			*size += 1;
		}
	}
	write(1, buffer, *size);
	return (va_end(data), free(buffer), *size);
}
