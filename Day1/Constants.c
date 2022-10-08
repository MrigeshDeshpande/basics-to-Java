#include <stdio.h>
//below code will not work
/*
int main() {
  const int myNum = 15;
  myNum = 10;
  
  printf("%d", myNum);
  return 0;
}
*/

//the code that will work
int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;

  printf("%d\n", minutesPerHour);
  printf("%f\n", PI);
  return 0;
}
