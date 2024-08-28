#include <stdio.h>

int main() {
	int num, *pnum;
	pnum = &num;
	printf("Enter a number to be stored in a location pointed by a pointer: ");
	scanf("%d", pnum);
	printf("You entered %d", *pnum);
};
