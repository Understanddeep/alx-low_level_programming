#include "3-calc.h"

/**
 * get_op_func -  selects the correct function to
 * perform the operation asked by the user
 * @s: input string
 * Return: pointer to a function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int b = 0;

	while (b < 5)
	{
		if (!strcmp(ops[b].op, s))
			return (ops[b].f);
		b++;
	}
	return (NULL);
}
