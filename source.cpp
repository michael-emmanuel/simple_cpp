#include <iostream>
using namespace std;

void add_to_int(int &r)
{
  r += 5;
}

int main()
  {
    int i = 0;
    int &ri = i;

    cout << i << endl;
    cout << ri << endl;

    add_to_int(ri);

    cout << i << endl;
    cout << ri << endl;
    
    return 0;
  }
