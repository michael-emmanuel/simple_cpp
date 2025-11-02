#include <iostream>
#include <string>
using namespace std;

// Create inheritance chain
class Object
{
  public:
    virtual void BeginPlay();
};
// Every Actor is an object
class Actor : public Object
{
  public:
    virtual void BeginPlay() override;
};
// Every Pawn is an actor, and thus also an Object
class Pawn : public Actor
{
  public: 
    virtual void BeginPlay() override;
};

int main()
{
  Object* ptr_to_object = new Object;
  Actor* ptr_to_actor = new Actor;
  Pawn* ptr_to_pawn = new Pawn;

  // Why can we initialize these arrays types to Object
  // Be each one of these (obj, actor, pawn) can legally convert to an object
  // Note: Polymorphism almost always uses pointers or refs, not plain objs
  // This would error => Object ObjectArray[] = {Object(), Actor(), Pawn()}
  Object* ObjectArray[] = {ptr_to_object, ptr_to_actor, ptr_to_pawn};

  for (int i = 0; i < 3; i++)
  {
    ObjectArray[i]->BeginPlay();
  }

  delete ptr_to_object;
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