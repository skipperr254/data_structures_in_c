#include <stdio.h>

int main() {
	char c;
	printf("Enter your character: ");
	scanf("%c", &c);

	switch(c) {
		case 'A':
		case 'a':
			printf("%c is a vowel", c);
			break;
		case 'E':
		case 'e':
			printf("%c is a vowel", c);
			break;
		case 'I':
		case 'i':
			printf("%c is a vowel", c);
			break;
		case 'O':
		case 'o':
			printf("%c is a vowel", c);
			break;
		case 'U':
		case 'u':
			printf("%c is a vowel", c);
			break;
		default:
			printf("%c is not a vowel", c);
	}
}
