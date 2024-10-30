#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void eat()
{
	int f = 1,i;
	for ( i = 1; i < 10; i++)
	{
		f = 2 * (f + 1);
	}
	printf("%d", f);
}