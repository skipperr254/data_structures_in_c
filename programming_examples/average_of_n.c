#include <stdio.h>

int main() {
	int i = 0, n, sum = 0;
	float avg;

	printf("Enter the first n numbers whose average you want: ");
	scanf("%d", &n);

	do {
		sum += i;
		i++;
	} while (i <= n);
	
	avg = (float) sum/n;
	printf("Sum of the first %d numbers is %d\n", n, sum);
	printf("The average of the first %d numbers is %.2f", n, avg);
}
