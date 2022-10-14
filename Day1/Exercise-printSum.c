#include<stdio.h>
//Write a C program that accepts two integers from the user and calculate the sum of the two integers.
int main() 
   {
	int x, y,sum;
    printf("\nInput the first integer: "); 
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
    sum = x + y;
    //div=x%y;
    printf("\n sum of the above two integers = %d\n", sum);
    return 0;
}