//It allows a function to modify a variable without having to create a copy of it.
// We have to declare reference variables. The memory location of the passed variable
// and parameter is the same and therefore, any change to the parameter reflects
// in the variable as well.

#include <iostream>
using namespace std;
int add(int *a); //1. declare a pass by reference function

//2. define a pass by reference function
int add(int *a){

    int b=*a+1; //3. dereference the pointer and increment the value by 1

    *a=5; //4. modify the value of the variable

    return b; //5. return the value of b
}

//6. main function
int main() {

    int myVariable=2; //7. define a variable

    int myAnswer=add(&myVariable); //8. pass the variable by reference

    std::cout<<myAnswer<<std::endl; //9. print the value of myAnswer

    std::cout<<myVariable<<std::endl; //10. print the value of myVariable

    return 0;
}