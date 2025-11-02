#include <iostream>
#include <string>
using namespace std;

int main()
 {
  int MyInt = 2;
  // Passing around addresses in a program is more efficient that pass a huge struct or long array
  // pointers do not have to be initialized right away, unlike references
  int* ptr;
  ptr = &MyInt;
  cout << ptr << endl;
  cout << *ptr << endl; // the * dereferences the pointer, returning the value stored in memory

  return 0;
 }
