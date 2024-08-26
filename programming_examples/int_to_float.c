#include <stdio.h>

int main() {
	int i_num;
	float f_num;
	printf("Enter an integer: ");
	scanf("%d", &i_num);
	f_num = (float) i_num;
	printf("The float variant of the integer %d is %f.", i_num, f_num);
}
