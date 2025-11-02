#include <iostream>
#include <string>
using namespace std;

int main()
 {
  int a = 100;
  int* aPtr;
  aPtr = &a; // &a => address of operator, returns address of a NOTE: & on left side of equal sign for reference

  cout << aPtr << endl;
  cout << *aPtr << endl; // dereference to get value living in address

  int numbers[] = {0,1,2,3,4,5,6,7,8,9,10};

  int* numPtr = numbers; // only stores the address of the first element

  cout << *numPtr << endl;

  numPtr++; // bc arrays are contigious in memory, incrementing give us next val in array

  cout << *numPtr << endl;

  numPtr++;

  cout << *numPtr << endl;

  numPtr += 2;

  cout << *numPtr << endl;

  return 0;
 }
