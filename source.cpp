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
    virtual void BeginPlay() override;
};

class Pawn : public Actor
{
  public:
    virtual void BeginPlay() override;
};

int main()
{
  Object* obj = new Object;
  obj->BeginPlay();

  Actor* act = new Actor;
  act->BeginPlay();

  Pawn* pwn = new Pawn;
  pwn->BeginPlay();

  delete obj;
  delete act;
  delete pwn;

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

void Pawn::BeginPlay()
{
  cout << "Pawn BeginPlay() called. \n";
}