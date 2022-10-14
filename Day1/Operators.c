#include <stdio.h>
//Arithmetic Operators
int main() {
  float sum1 = 100.9 + 50;        // 150 (100 + 50)
  float sum2 = sum1 + 250;      // 400 (150 + 250)
  float sum3 = sum2 + sum2;     // 800 (400 + 400)
  printf("%f\n", sum1);
  printf("%f\n", sum2);
  //printf("%d\n", sum3);
  return 0;
}

// //Assignment Operators

// int main() {
//   int x = 10;
//   x += 5;
//   printf("%d", x);
//   return 0;
// }

// //Comparison Operator

// int main() {
//   int x = 5;
//   int y = 3;
//   printf("%d", x > y); // returns 1 (true) because 5 is greater than 3
//   return 0;
// }

// //!=
// int main() {
//   int x = 5;
//   int y = 3;
//   printf("%d", x != y); // returns 1 (true) because 5 is not equal to 3
//   return 0;
// }

// //logical Operator
// int main() {
//   int x = 5;
//   int y = 3;
  
//   // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
//   printf("%d", x > 3 && x < 10);
//   return 0;
// }