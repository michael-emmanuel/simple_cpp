#include <iostream>
#include <string>
using namespace std;

int main()
 {
  int myIntArray[3];
  myIntArray[0] = 1;
  myIntArray[1] = 2;
  myIntArray[2] = 3;

  for (int i = 0; i < 3; i++)
  {
    cout << myIntArray[i] << endl;
  }

  // number not needed in sq brackets when arr is
  // initialized in the same line var is declared
  double myDubArray[] = {3.14159, 2.71828};
  cout << myDubArray[1] << endl;
  cout << myDubArray[0] << endl;
 }

