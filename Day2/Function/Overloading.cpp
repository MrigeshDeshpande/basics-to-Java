// #include <iostream>
// using namespace std;

// int plusFuncInt(int x, int y) {
//   return x + y;
// }

// double plusFuncDouble(double x, double y) {
//   return x + y;
// }

// int main() {
//   int myNum1 = plusFuncInt(8, 5);
//   double myNum2 = plusFuncDouble(4.3, 6.26);
//   cout << "Int: " << myNum1 << "\n";
//   cout << "Double: " << myNum2;
//   return 0;
// }

// //better way
#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
  return x + y;
}

int plusFunc(float x, float y) {
  return x + y;
}
double plusFunc(double x, double y) {
  return x + y;
}


int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.35555555555555555555555555, 6.26333333333333333333333333);
  float myNum3= plusFunc(3.3,6.90);
  cout<<"Float:"<<myNum3<<endl;
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
