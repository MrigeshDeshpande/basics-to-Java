#include <stdio.h>


#include <stdio.h>

int main() {
  int time = 20;
  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}

//ternary

int main() {
  int time = 20;
  (time < 18) ? printf("Good day.") : printf("Good evening.");
  return 0;
}

