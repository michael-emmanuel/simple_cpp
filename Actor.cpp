#include "Actor.h"

Actor::Actor() {}           // constructor
Actor::~Actor() {}          // destructor

void Actor::BeginPlay()
{
  cout << "Actor BeginPlay() called.\n\n";
}

void Actor::ActorFunction()
{
  cout << "ActorFunction() called.\n\n";
}