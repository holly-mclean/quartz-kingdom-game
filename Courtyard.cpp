/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Function definitions for Courtyard class. Courtyard is the
central location in the game.
******************************************************************************/

#include "Courtyard.hpp"
#include "menu.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/******************************************************************************
Displays Courtyard menu and options. This is the central location for the game,
and the player can go to most other Spaces from this location. Validates and
returns the player's menu choice.
******************************************************************************/
int Courtyard::spaceMenu()
{
  //Current map location
  cout << endl;
  cout << "                              MAP:                               \n";
  cout << "                              ____                               \n";
  cout << "                             | GH |                              \n";
  cout << "                             |    |                              \n";
  cout << "                             |____|                              \n";
  cout << "                             | E  |                              \n";
  cout << "                             |    |                              \n";
  cout << "                         ____|____|____                          \n";
  cout << "                        | Ga | C  | L  |                         \n";
  cout << "                        |    | @  |    |                         \n";
  cout << "                        |____|____|____|                         \n";
  cout << "                             | Gr |                              \n";
  cout << "                             |    |                              \n";
  cout << "                             |____|                              \n";
  cout << endl;
  cout << "                        GH: Great Hall\n";
  cout << "                        E: Entryway\n";
  cout << "                        C: Courtyard\n";
  cout << "                        L: Library\n";
  cout << "                        Gr: Groundskeeper's Hut\n";
  cout << "                        Ga: Gardens\n";
  cout << "                        @: Your location\n";

  

  cout << endl;
  cout << "You are in the Castle Courtyard. To the north lies the Great \n";
  cout << "Hall entryway, beyond which lies the Great Hall. To the west are\n";
  cout << "the Royal Gardens. To the east is the Royal Library. To the \n";
  cout << "south lies the path to the Grounds Keeper’s Hut.\n\n";

  cout << "What do you do?\n\n";

  cout << "1. Go north to the Great Hall entryway\n";
  cout << "2. Go east to the Royal Library\n";
  cout << "3. Go south to the Groundskeeper's hut\n";
  cout << "4. Go west to the Royal Gardens\n";

  //Get user menu choice and validate integer
  menuCh = checkInt();

  while(menuCh < 1 || menuCh > 4)
  {
    cout << "Please choose one of the above options: ";
    menuCh = checkInt();
  }

  return menuCh;
}




/******************************************************************************
Function that calls the spaceMenu function to get player's next Space choice,
and returns the relevant pointer. This object will not use the parameters for
this function.
******************************************************************************/
Space* Courtyard::decisions(int (&array) [3], int* stepPtr)
{
  choice = spaceMenu();

  //Return Entryway pointer
  if(choice == 1)
  {
    return top;
  }

  //Return Library pointer
  else if(choice == 2)
  {
    return right;
  }

  //Return Grounds pointer
  else if(choice == 3)
  {
    return bottom;
  }

  //Return Gardens pointer
  else
  {
    return left;
  }
}
