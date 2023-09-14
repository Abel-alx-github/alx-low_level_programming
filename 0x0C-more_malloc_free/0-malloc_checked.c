#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - allocate memory for new pointer
*@b: size to be allocated the pointer
*Return: pointer
 */
void *malloc_checked(unsigned int b)

{
	void *new;

	new = malloc(b);

	if (new == 0)
		exit(98);

	return (new);

}
