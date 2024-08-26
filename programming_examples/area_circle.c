#include <stdio.h>
#include <conio.h>

int main() {
	float radius, area;
	// clrscr();
	printf("Enter the radius of the circle: \n");
	scanf("%f", &radius);
	area = 3.142 * radius * radius;
	printf("Area of circle with radius %.2f is %.4f", radius, area);
}
