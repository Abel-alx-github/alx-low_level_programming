#include "main.h"
/**
*reverse_array - Function that reverse intiger.
*@a: int pointer
*@n:number of elements in a
*/
void reverse_array(int *a, int n)
{
int i, swap;
for (i = 0; i < n; i++, n--)
	{
	swap = a[i];
	a[i] = a[n - 1];
	a[n - 1] = swap;
	}




}
