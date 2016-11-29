#include <iostream>
#include <tins.tins.h>
using namespace Tins;
using namespace std;

int main () {
  
  int foo, bar, myvar
  myvar = 25;
  foo = &myvar; //  "address of"
  bar = myvar; // not needed, just for purpose

  baz = foo;
  baza = *foo; // baz equal to value pointed to by foo (25)

  cout << foo << endl;
  cout << bar << endl;

  cout << baz << endl;
  cout << baza << endl;
  return 0;
}
