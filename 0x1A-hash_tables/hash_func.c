#include <stdio.h>
unsigned long int hash_fun(char *str);
int main()
{
	char *name = "abel";
	unsigned long int hash_value_idx = hash_fun(name);

	printf("%lu\n",hash_value_idx);

}


unsigned long int hash_fun(char *str)
{
	unsigned long int count = 0;

	while(*str != '\0')
	{
		printf("%c: %d\n", *str, *str);
		count += *str;
		str++;
	}
	printf("This is to be hased %lu\n", count);
	count = count % 10;
	return count;

}
