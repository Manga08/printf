#ifndef HOLBERTON_FILE
#define HOLBERTON_FILE

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct types
{
	char *arr;
        void(*f)(va_list data);
} type;

#endif
