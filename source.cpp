#include <iostream>
#include <string>
using namespace std;

int main()
 {
  // complex way to create string using char
  char MyComplexString[5] = {'D', 'o', 'g', 's', '\0'};

  // less complex way to create string using char 
  // len 5 to account for null char
  char myLessComplexString[5] = "Dogs";

  // go to way, must #include string
  // w/o importing namespace std -> std::string
  string MyString;
  MyString = "My dog's name is: ";
  string first = "Spot ";
  string last = "Jones";

  MyString += (first + last);

  cout << MyComplexString << endl;
  cout << myLessComplexString << endl;
  cout << MyString << endl;
  
  return 0;
 }

