#include <stdio.h>

int main() {
	int day, year;

	char month[10];

	printf("Enter date (e.g., 25 December 2024): ");

	scanf("%d %s %d", &day, month, &year);

	printf("Day: %d, Month: %s, Year: %d", day, month, year);
}
