#include <iostream>
#include <string>
using namespace std;

struct Character
{
  string Name;
  float Health;
};

int main()
{
  for (int i = 0; i < 1000000000000000; i++)
  {
    Character* PtrToChar = new Character();

    PtrToChar->Name = "Neo";

    cout << PtrToChar->Name << endl;

    delete PtrToChar;
  }


  return 0;
}

