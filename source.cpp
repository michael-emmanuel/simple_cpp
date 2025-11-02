#include <iostream>
#include <string>
using namespace std;

class Dog
{
  public:
    Dog()
    {
      Bark();
    }

    string Name;
    int Age;
    float Health;

    void Bark()
    {
      cout << "Woof!" << endl;
    }
};

int main()
 {
  Dog Spot;
  Dog Rex;

  return 0;
 }
