#include <iostream>
#include <string>
using namespace std;

struct Container
{
  string Name;

  int x;
  int y;
  int z;
};

int main()
 {
  Container container = {"Sam", 5, 6, 7};

  Container* PtrToCont = &container;

  cout << (*PtrToCont).Name << endl; // must use parenthesis to properly access properties
  cout << (*PtrToCont).x << endl;
  cout << (*PtrToCont).y << endl;
  cout << (*PtrToCont).z << endl;

  cout << PtrToCont->Name << endl; // syntactic sugar - better than parenthesis

  return 0;
 }
