#include <stdio.h>

int main() {
	

	//this is the line causing issue in the conflict branch

	// this is the second line causing issue in the master branch
	
	
	int x, y, z, a, b =0;
	int avg;
	
	printf("Enter values: ");
	scanf("%i %i %i %i %i", &x, &y);
	
	avg = x+y+z+a+b;
	avg = avg/5;
	
	printf(" answer = %i", avg); 
	printf("this change");
}
