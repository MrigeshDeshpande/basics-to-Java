//Use a structure to store different information about Cars:
#include <stdio.h>

struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1  = {"BMW", "X5", 1999}; //declare car1 of type CAr
  struct Car car2  = {"Ford", "Mustang", 1969};
  struct Car car3  = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}