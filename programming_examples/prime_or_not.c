#include <stdio.h>

int main() {
	int n, i, flags = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	for (i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			flags = 1;
			break;
		} 
	} 
	printf("%d is a %s number", n, flags ? "composite" : "prime");
}
