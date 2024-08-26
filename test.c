#include <stdio.h>

int main() {
	char *str = "Hello world";
	char string[] = "Hello world";

	printf("%d", *(str));
	printf("%d", *(string));
}
