#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
  PS_Running,
  PS_Walking,
  PS_Crouching
};

// .f ensure its type float and not double
const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

void SwitchOnInt(int i);

int main()
 {
  int integer = 23;

  SwitchOnInt(integer);

  return 0;
 }

// switch cases are much faster than else ifs bc if does check every 
// single case like the else if does (think 1000+ checks that happen very often)
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
  switch (P_Status)
  {
    case PS_Running:
      speed = RunSpeed;
      break;
    case PS_Walking:
      speed = WalkSpeed;
      break;
    case PS_Crouching:
      speed = CrouchSpeed;
  }
}

void SwitchOnInt(int i)
{
  switch (i)
  {
    case 0:
      cout << "Your number was zero. \n";
      break;
    case 1:
      cout << "Your number was one. \n";
      break;
    case 2:
      cout << "Your number was two. \n";
      break;
    default:
      cout << "Your number was not 0, 1, or 2. \n";
  }
}