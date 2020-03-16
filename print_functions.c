#include "holberton.h"
/**
 * p_int - integer
 *@data: type data.
 *@buffer: the buffer
 *@size: the size of the array
 */
void p_int (va_list data, char *buffer, unsigned int *size)
{
	int i = va_arg(data, int), n, sizes = 0, tmps = 0;

	n = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		sizes++;
	}
	sizes++;
	tmps = sizes;
	while (sizes > 0)
	{
		buffer[*size + sizes - 1] = (i % 10) + 48;
		i /= 10;
		sizes--;
	}
	*size += tmps;
/**
 * p_char - characters
 * @data: type data
 * @buffer: pointer buffer.
 * @size: lenght.
 */
void p_char (va_list data, char *buffer, unsigned int *size)
{
	buffer[*size] = va_arg(data, int);
	*size += 1;
}

/**
 * p_str - strings
 * @s: type data
 */
void p_str(va_list s)
{

}
