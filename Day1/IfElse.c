#include <stdio.h>

int main() {
  if (20 > 18) {
    printf("20 is greater than 18");
  }  
  return 0;
}

//
int main() {
  int time = 20;
  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}

//

#include <stdio.h>

int main() {
  int myNum = 10;
  
  if (myNum > 0)
    printf("The value is a positive number.");
  else if (myNum < 0)
    printf("The value is a negative number.");
  else
    printf("The value is 0.");
    
  return 0;
}