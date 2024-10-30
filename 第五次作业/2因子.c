#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void factor()
{
	int a, count = 0;
	scanf("%d", &a);
	while (1)
	{
		if (a % 2 == 0)
		{
			a /= 2;
			count += 1;
		}
		else
		{
			break;

		}
	}
	printf("%d", count);
}