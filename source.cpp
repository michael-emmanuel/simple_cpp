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
  MS_Running
}

int main()
 {
  PlayerStatus status;
  status = PlayerStatus::PS_Running;
  MovementStatus m_status; 

  if (status == PS_Crouched)
  {
    cout << "The player is crouching! \n";
  }

  m_status = MovementStatus::MS_Running;
  if (status == PS_Crouched)
  {
    cout << "The player is crouching! \n";
  }

  return 0;
 }

