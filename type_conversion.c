#include <stdio.h>

int main() {
	char c = 'C';
	short n = 1;
	int i = 1;
	long l = 123456789;
	float f = 1.2;
	double d = 1.234567;

	printf("char: %d\n", sizeof(c));
	printf("short: %d\n", sizeof(n));
	printf("int: %d\n", sizeof(i));
	printf("long: %d\n", sizeof(l));
	printf("float: %d\n", sizeof(f));
	printf("double: %d\n", sizeof(d));
}
