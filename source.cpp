#include <iostream>
#include <string>
using namespace std;

class Creature
{
  public:
    Creature();

    void SetName(string name);
    string GetName();

    float GetHealth();

    void TakeDamage(float damage);

  private:
    string Name;
    float Health;

  protected:
    int NumberOfLimbs;

};

class Goblin : public Creature
{
  Goblin();
};

int main()
{
  Creature Igor;
  Igor.SetName("Igor");
  cout << "Name: " << Igor.GetName() << endl;
  cout << "Health: " << Igor.GetHealth() << endl;

  cout << "Igot will now take 35 damage!" << endl;
  Igor.TakeDamage(35.0);

  return 0;
}

Creature::Creature()
{
  Health = 100.f;
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

float Creature::GetHealth()
{
  return Health;
}

void Creature::TakeDamage(float damage)
{
  float Total;
  Total = Health - damage;

  if (Total <= 0.f) 
  {
    cout << GetName() << " has died!\n";
  } 
  else 
  {
    Health -= damage;
  }

  cout << "Health: " << Health << endl;
}

Goblin::Goblin()
{
  NumberOfLimbs = 5;
}