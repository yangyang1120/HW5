#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n[10] = { 0 };
	int i;
	printf("element\t\tvalue\n");
	for (i = 0;i <= 9;i++)
	{
		printf("%7d\t%13d\n", i, n[i]);
	}
	system("pause");
}