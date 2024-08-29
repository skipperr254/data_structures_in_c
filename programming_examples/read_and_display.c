#include <stdio.h>

int main() {
	int size;
	printf("Enter the size of the array: \n");
	scanf("%d", &size);
	int array[size];
	printf("Enter the values of the array one by one.\n");
	for (int i = 0; i < size; i++) {
		printf("Element %d: ", i);
		scanf("%d", &array[i]);
	}
	for (int j = 0; j < size; j++)
		printf("%d\n", array[j]);
}
