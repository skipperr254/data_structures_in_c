#include <stdio.h>

void swap(int *num1, int *num2);

int main() {
	int num1 = 10;
	int num2 = 20;

	printf("Before swap num1 = %d and num2 = %d\n", num1, num2);

	swap(&num1, &num2);

	printf("After swap num1 = %d and num2 = %d\n", num1, num2);
}

void swap(int *num1, int *num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
