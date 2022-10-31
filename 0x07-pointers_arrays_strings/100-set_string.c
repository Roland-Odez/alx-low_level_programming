#include "main.c"

/**
 * set_string - sets the value of a pointer to a char varaible
 * @p: pointer to pointer
 * @ch: poiniter char
 */

void set_string(char **p, char *ch)
{
	*p = ch;
}
