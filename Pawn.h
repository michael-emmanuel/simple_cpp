#pragma once
#include "Actor.h"

class Pawn : public Actor
{
  public: 
    Pawn();
    ~Pawn();
    
    virtual void BeginPlay() override;

    void PawnFunction();
};