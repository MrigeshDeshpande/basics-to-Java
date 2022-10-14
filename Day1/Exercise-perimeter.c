//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches
#include <stdio.h> 
/* height and width of a rectangle in inches */
int width,height,area,perimeter;      

int main() {
	height = 7;
	width = 5;

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

return(0);
}