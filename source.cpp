#include <iostream>
using namespace std;

void add_to_int(int &r)
{
  r += 5;
}

// references cannot be null

// you cannot change referenced variable
// once a var is associated to a reference
// it is that way forever

// You cannot do math on an index (unlike pointer)

// You cannot point references to references (unlike pointer)
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
