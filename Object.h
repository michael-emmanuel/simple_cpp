#pragma once
#include <iostream>
using namespace std;

class Object
{
  public:
    Object();               // default constructor
    virtual ~Object();      // virtual destructor
    
    virtual void BeginPlay();

    void ObjectFunction();
};