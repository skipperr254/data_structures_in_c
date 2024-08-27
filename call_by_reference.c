#include <stdio.h>

void add(int *num);

int main() {
	int val = 10;
	printf("Value before add is %d\n", val);
	add(&val);
	printf("Value after add is %d\n", val);
}

void add(int *num) {
	*num += 10;
}
