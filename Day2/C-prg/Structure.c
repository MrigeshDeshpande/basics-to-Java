struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  struct myStructure s1;
  return 0;
}

// Access Structure Members------------------------------------


// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}

//multiple structure variables with different values, using just one structure --------

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create different struct variables
  struct myStructure s1;
  struct myStructure s2;

  // Assign values to different struct variables
  s1.myNum = 13;
  s1.myLetter = 'B';

  s2.myNum = 20;
  s2.myLetter = 'C';

  // Print values
  printf("s1 number: %d\n", s1.myNum);
  printf("s1 letter: %c\n", s1.myLetter);

  printf("s2 number: %d\n", s2.myNum);
  printf("s2 letter: %c\n", s2.myLetter);

  return 0;
}

//copy structures

#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};
  
  // Create another structure variable
  struct myStructure s2;
  
  // Copy s1 values to s2
  s2 = s1;

  // Print values
  printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

  return 0;
}