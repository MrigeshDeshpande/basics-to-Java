// the memory location of the variables is passed to the parameters in the function, 
// and then the operations are performed.

#include <iostream>
using namespace std;
 int add(int a);
  //1. declare a pass by value function

//2. define a pass by value function
int add(int a){

    int b=a+1; //3. increment the incoming value by 1

    return b; //4. return the value of b
}

//5. main function
int main() {

    int myVariable=2; //6. define a variable

    int myAnswer=add(myVariable); //7. pass the variable by value

    std::cout<<myAnswer<<std::endl; //8. print the value of myAnswer

    std::cout<<myVariable<<std::endl; //9. print the value of myVariable

    return 0;
}