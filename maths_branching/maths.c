#include <stdio.h>

int main() {
	
	int x, y, z, a, b =0;
	int avg;
	
	printf("Enter values: ");
	scanf("%i %i %i %i %i", &x, &y);
	
	avg = x+y+z+a+b;
	avg = avg/5;
	
	printf(" answer = %i", avg); 
}
