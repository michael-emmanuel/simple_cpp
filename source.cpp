#include <iostream>
#include <string>
using namespace std;

class Object
{
  public:
    virtual void BeginPlay();
};
// vitual functions can be inherited and overwritten by the inheriter
class Actor : public Object
{
  public:
    virtual void BeginPlay();
};

int main()
{
  Object* obj = new Object;
  obj->BeginPlay();

  Actor* act = new Actor;
  act->BeginPlay();

  delete obj;
  delete act;

  return 0;
}

void Object::BeginPlay()
{
  cout << "Object BeginPlay() called. \n";
}

void Actor::BeginPlay()
{
  cout << "Actor BeginPlay() called. \n";
}