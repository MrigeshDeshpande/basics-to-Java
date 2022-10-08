//sum of a function with two parameters
#include <stdio.h>

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("Result is: %d", myFunction(5, 3));

  return 0;
}