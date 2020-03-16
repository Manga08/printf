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
	char *pointer;
        void(*f)(va_list data);
} cases;

void p_char (va_list c);
void p_int(va_list i);
void p_float(va_list f);
void p_str(va_list s);

#endif
