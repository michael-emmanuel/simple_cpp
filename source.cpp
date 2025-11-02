#include <iostream>
#include <string>
using namespace std;

class Critter
{
  public:
    Critter()
    {
      cout << "A critter is born!\n";
      ++CritterCount;
    }

    static void AnnounceCount()
    {
      cout << CritterCount << endl;
    }

    static int CritterCount;
};

int Critter::CritterCount = 0;

int main()
{
  Critter::AnnounceCount();

  Critter* crit = new Critter;
  
  Critter::AnnounceCount();

  delete crit;

  return 0;
}
