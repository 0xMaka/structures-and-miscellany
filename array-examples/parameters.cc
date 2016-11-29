// arrays s parameters
#include <iostream>

using namespace std;

void printarray (int arg[], int length) { 
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

char myWord[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
char myword[] = {};

int main()

{
  int firstarray[] = {5, 10, 15};
  int secondarray [] = {2, 4, 6, 8, 10};

  printarray (firstarray, 3);
  printarray (secondarray, 5);
 
  myword[0] = 'B';
  myword[1] = 'y';
  myword[2] = 'e';
  myword[3] = '\0';

  cout << myWord << endl;
  cout << myword << endl;
  //..

  char myntcs[] = "some text";
  string mystring = myntcs;  // convert c-string to string
  cout << mystring << '\n';          // printed as a library string
  cout << mystring.c_str() << endl;  // printed as a c-string 

  //..

}


