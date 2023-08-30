#include "main.h"
/*
*reverse_array - function that reverse intiger
*@a: int pointer 
*@n:number of elements in a
*Return: returns void
*
*/
void reverse_array(int *a, int n)
{
int arr[n-1];
a = &arr;
int i, swap;
for (i = 0; a[i] < n; i++, n--)
	{
	swap = a[i];
	a[i] = a[n - 1];
	a[n - 1] = swap;
	}




}
