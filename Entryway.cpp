/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Function definitions for Entryway class. The Entryway leads to
the GreatHall space, where the game ends. You need a key to unlock the doors
in the Entryway, which can be found in the Grounds space.
******************************************************************************/

#include "Entryway.hpp"
#include "menu.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/******************************************************************************
Displays Entryway menu and options. The player can either attempt to unlock
a door or return to the Courtyard. If the player has the key, the door will
open. Validates and returns player's menu choice.
******************************************************************************/
int Entryway::spaceMenu()
{
  cout << endl << endl;


  //Door art by me
  cout << "       __-----------------_____-----------------__       \n";
  cout << "      /    _     _     _    |    _     _     _    \\     \n";
  cout << "     (    / \\   / \\   / \\   |   / \\   / \\   / \\    )    \n";
  cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
  cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
  cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
  cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
  cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
  cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
  cout << "      |  |   | |   | |   | @#@ |   | |   | |   |  |     \n";
  cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
  cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
  cout << "      |  |___| |___| |___|  |  |___| |___| |___|  |     \n";
  cout << "      |_____________________|_____________________|      \n";
  cout << "     /                                             \\       \n";
  cout << "    /                                               \\      \n";
  cout << "   /                                                 \\     \n";
  cout << "  /                                                   \\    \n";



  //Current map location
  cout << "   _" << endl;
  cout << "  |_|" << endl;
  cout << " _|@|_" << endl;
  cout << "|_|_|_|" << endl;
  cout << "  |_|" << endl << endl;

  cout << "You are in the entryway to the Great Hall. Ahead of you are the \n";
  cout << "locked double doors, beyond which King Alien is lining up the \n";
  cout << "citizens of the kingdom to be imprisoned in his UFO. ";
  cout << "\n\nWhat do you do?\n\n";

  cout << "1. Attempt to unlock the door\n";
  cout << "2. Return to the Courtyard\n\n";

  //Get user menu choice and validate integer
  menuCh = checkInt();

  while(menuCh < 1 || menuCh > 2)
  {
    cout << "Please choose one of the above options: ";
    menuCh = checkInt();
  }

  return menuCh;
}




/******************************************************************************
Displays the same spaceMenu options, but without the description of the room.
This makes the displays easier to follow and cleaner.
******************************************************************************/
int Entryway::subMenu()
{
  cout << "\nWhat do you do?\n\n";
  cout << "1. Attempt to unlock the door\n";
  cout << "2. Return to the Courtyard\n\n";

  menuCh = checkInt();

  while(menuCh < 1 || menuCh > 2)
  {
    cout << "Please choose one of the above options: ";
    menuCh = checkInt();
  }

  return menuCh;
}




/******************************************************************************
Function to handle player's menu choices. If player has the key item, they can
open the door. Otherwise, the doors won't open and you can't complete the game.
This function only uses the array parameter, and not the stepPtr parameter.
******************************************************************************/
Space* Entryway::decisions(int (&array) [3], int* stepPtr)
{
  choice = spaceMenu();

  //While player doesn't choose "return to courtyard"
  while(choice == 1)
  {
    /*
    If the player has the key item, the door opens and they travel to the
    GreatHall space to end the game.
    */
    if(array[1] == 1)
    {
      cout << endl;
      cout << "You take the great hall key out of your pocket and insert it \n";
      cout << "into the lock. The doors creak open...\n\n";

      //Go to the Great Hall
      return end;
    }

    //If the player doesn't have the key item
    else
    {
      cout << endl;
      cout << "You try to open the doors but they don’t budge. You need a key!";
      cout << endl << endl;
    }

    //Call the Entryway menu
    choice = subMenu();
  }

  //Return to the Courtyard
  return home;
}
