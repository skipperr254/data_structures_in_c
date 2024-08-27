#include <stdio.h>

int main() {
	int m, n, sum = 0;
	printf("Enter m (where to start): ");
	scanf("%d", &m);
	printf("Enter m (where to start): ");
	scanf("%d", &n);
	while (m <= n) {
		sum += m;
		m++;
	}
	printf("%d", sum);
}
