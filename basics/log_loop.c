#include <stdio.h>

int main() {
	int i;
	for (i = 1; i <= 100000; i *= 2) {
		printf("%d\n", i);
	}
}
