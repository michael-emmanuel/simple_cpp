#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
  PS_Crouched, 
  PS_Standing,
  PS_Walking,
  PS_Running
};

enum MovementStatus
{
  MS_Crouched,
  PS_Running
}

int main()
 {
  PlayerStatus status;
  status = PlayerStatus::PS_Running;

  if (status == PS_Crouched)
  {
    cout << "The player is crouching! \n";
  }

  status = PS_Walking;
  if (status == PS_Crouched)
  {
    cout << "The player is crouching! \n";
  }

  return 0;
 }

