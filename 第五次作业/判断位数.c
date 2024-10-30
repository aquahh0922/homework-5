#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void judge()
{
	int i,j,num,tag,ws;
	int nu[5] = { 0 };

	scanf("%d", &num);
	nu[0] = num / 10000;
	nu[1] = (num / 1000)%10;
	nu[2] = (num / 100)%10;
	nu[3] = (num/10)%10;
	nu[4] = num % 10;
	for ( i = 0; i < 5; i++)
	{
		if (nu[i] != 0)
		{
			tag = i;
			break;
		}
	}
	ws = 5 - tag;
	printf("Î»Êý=%d\n", ws);
	while (i < 5)
	{
		printf("%d\n", nu[i]);
		i++;
	}
	for ( j =4 ; j >=tag; j--)
	{
		printf("%d", nu[j]);
	}

	
	
}