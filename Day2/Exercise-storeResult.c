//Store the result in a variable
#include <stdio.h>

int myFunction(int x, int y) {
  return x + y;
}

int main() {  
  int result = myFunction(5, 3); 
  printf("Result is = %d", result);
  
  return 0;
}