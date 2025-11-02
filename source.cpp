#include <iostream>
#include <string>
using namespace std;

// Function overloading
void Print(string str);
void Print(int i);
void Print(string str1, string str2);
void printIt(char c);

int main()
  {
    Print("My string one!", "My string two!");

    printIt('g');
    
    return 0;
  }

void Print(string str)
{
  cout << str << endl;
}

void Print(int i)
{
  cout << i << endl;
}

void Print(string str1, string str2)
{
  cout << "String 1: " << str1 << endl;
  cout << "String 2: " << str2 << endl;
}

void printIt(char s)
{
  cout << s << endl;
}

