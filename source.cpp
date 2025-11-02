#include <iostream>
#include <string>
using namespace std;

class Creature
{
  public:
    Creature();

    void SetName(string name);
    string GetName();

  private:
    string Name;
    float Health;
};

int main()
{
  Creature Igor;
  Igor.SetName("Igor");

  cout << Igor.GetName() << endl;

  return 0;
}

Creature::Creature()
{
  cout << "A creature has been created!\n";
}

void Creature::SetName(string name)
{
  Name = name;
}

string Creature::GetName()
{
  return Name;
}