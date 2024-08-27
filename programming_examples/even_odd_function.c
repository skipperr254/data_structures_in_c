#include <stdio.h>

int even_or_odd(int num);

int main() {
	int val, flag;

	printf("Enter your value: ");
	scanf("%d", &val);

	flag = even_or_odd(val);

	if (flag) printf("%d is EVEN", val);
	else printf("%d is ODD", val);
}

int even_or_odd(int num) {
	if (num % 2 == 0) return 1;
	else return 0;
}
