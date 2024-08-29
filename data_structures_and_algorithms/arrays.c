#include <stdio.h>

int main()
{
	int marks[10] = {10};
	for (int i = 0; i < 10; i++)
	{
		printf("Element @ %d: ", i);
		scanf("%d", &marks[i]);
	}
	for (int j = 0; j < 10; j++)
		printf("%d\n", marks[j]);
}