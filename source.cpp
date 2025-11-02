#include <iostream>
#include <string>
using namespace std;

struct Cat
{
  Cat();

  int age;
  float Health;

  void Meow();
};

Cat::Cat()
{
  cout << "A new cat is born!" << endl;

  age = 3;
  Health = 75.f;

  Meow();
}

void Cat::Meow()
{
  cout << "My age is: " << age << ".\n";
  cout << "My Health is: " << Health << ".\n";
}

int main()
 {
  Cat cat;
  return 0;
 }
