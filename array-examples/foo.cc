#include <iostream>

using namespace std;

int main () {
  
  int firstvalue, secondvalue;
  int *mypointer; //*points at
  
  mypointer = &firstvalue; //address where value stored in memory
  *mypointer = 10; //assign value of ten to memory at &first value
  mypointer = &secondvalue; // reassign variable to point at address ...
  *mypointer = 20; // ...

  cout << "firstvalue is " << firstvalue<< endl;
  cout << "secondvalue is " << secondvalue << endl;
  return 0;
}
