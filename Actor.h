#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Actor : public Object
{
  public:
    Actor();                // default constructor
    ~Actor();               // destructor
    
    virtual void BeginPlay() override;

  void ActorFunction();
};
