#include <iostream>
#include <string>
using namespace std;

void AddToCount()
{
  static int count = 0; // use static to maintain state outside scope
  count++;              // however you have no way of accessing count
  cout << count << endl;
}

int main()
{
  for (int i = 0; i < 100; i++)
  {
    AddToCount();
  }

  return 0;
}
