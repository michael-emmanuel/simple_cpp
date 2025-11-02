#include <iostream>
#include <string>
using namespace std;

class Character
{
  public:
    Character();
    ~Character(); // Destructor notice ~

    int* CharacterAge;
    float* CharacterHealth;
};

int main()
{
  Character* Char = new Character;
  delete Char;

  return 0;
}

Character::Character()
{
  cout << "A new character was created.\n";

  CharacterAge = new int(1);
  CharacterHealth = new float(100.f);
}

Character::~Character()
{
  cout << "Character Destroyed.\n";

  delete CharacterAge;
  delete CharacterHealth;
}