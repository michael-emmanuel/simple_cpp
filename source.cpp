#include <iostream>
using namespace std;

void welcome();
void goodbye();

int main()
{
  welcome();
  goodbye();


  return 0;
}

void welcome()
{
  cout << "Welcome! \n";
}

void goodbye()
{
  cout << "Goodbye! \n";
}