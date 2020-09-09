/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Function definitions for Grounds class. The grounds contain a
hint to get to an optional collectible, and they contain a key required to
finish the game.
******************************************************************************/

#include "Grounds.hpp"
#include "menu.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/******************************************************************************
Displays Grounds menu and options. There are 2 exploring options, one of which
provides a clue to an optional collectible, and the other provides the key item
needed to finish (but not necessarily win) the game. Validates and returns the
player's menu choice.
******************************************************************************/
int Grounds::spaceMenu()
{
  cout << endl;

  //Art by me
  cout << "                      ( )                       ^^       \n";
  cout << "     ^^                ( )                               \n";
  cout << "                       ( )         ^^                     \n";
  cout << "                      ( )                               \n";
  cout << "                      __                               \n";
  cout << "                     |  |                               \n";
  cout << "               /\\    |  |                               \n";
  cout << "             _/  \\_  |  |               @@##@            \n";
  cout << "           _/      \\_|  |           @##@@@#@@#@          \n";
  cout << "         _/      #   \\_ |         @@#@#\\#@@@#@@#@         \n";
  cout << "       _/   #          \\|      @@##/@@@@#@#/#@@@##@#      \n";
  cout << "      (==================)      #@@#\\@@/@@@#@@\\@#@          \n";
  cout << "      |              @   |     @@@ \\__ \\  \\ @_/@#           \n";
  cout << "      |  @    ____       |            \\ \\_/ /              \n";
  cout << "      |      |####|      |             \\   |              \n";
  cout << "      |      |####|   @  |              |@ |              \n";
  cout << "     _/      ======      \\______________|  |_______________\n";
  cout << "    (_______========_______)           /____\\               \n";


  //Current map location
  cout << "   _" << endl;
  cout << "  |_|" << endl;
  cout << " _|_|_" << endl;
  cout << "|_|_|_|" << endl;
  cout << "  |@|" << endl << endl;

  cout << "You walk down rough stone steps along the inside wall of the \n";
  cout << "castle to the Groundskeeper’s hut. Tabitha, the Groundskeeper, \n";
  cout << "was taken along with the rest of the citizens to the Great Hall \n";
  cout << "for eventual abduction. She usually carries around a large chain \n";
  cout << "of keys but you hope to find them in her hut, so you step inside.\n";
  cout << "The hut is modestly sized with just a single large room. There is\n";
  cout << "a bed in the far corner next to which lies a desk with paperwork,\n";
  cout << "and there’s a small kitchen near the entrance with a cookie jar \n";
  cout << "on the counter. There are many storage trunks stacked around the\n";
  cout << "room and clothes are strewn everywhere.\n\nWhat do you do?\n\n";

  cout << "1. Search around the hut\n";
  cout << "2. Grab a cookie from the cookie jar\n";
  cout << "3. Return to the Courtyard\n\n";

  //Get user menu choice and validate integer
  menuCh = checkInt();

  while(menuCh < 1 || menuCh > 3)
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
int Grounds::subMenu()
{
  cout << "\nWhat do you do?\n\n";
  cout << "1. Search around the hut\n";
  cout << "2. Grab a cookie from the cookie jar\n";
  cout << "3. Return to the Courtyard\n\n";

  menuCh = checkInt();

  while(menuCh < 1 || menuCh > 3)
  {
    cout << "Please choose one of the above options: ";
    menuCh = checkInt();
  }

  return menuCh;
}




/******************************************************************************
Function that handles the player's menu choices. If the player chooses to search
the hut, they'll be provided the "Penelope" clue for unlocking a special gate.
If the player chooses to grab a cookie, they'll find keys instead, which will
change the value at array[1]. This function uses the array parameter but not
the stepPtr parameter.
******************************************************************************/
Space* Grounds::decisions(int (&array) [3], int* stepPtr)
{
  choice = spaceMenu();

  //While player's choice isn't "return to courtyard"
  while(choice != 3)
  {
    /*
    Player searches the hut, doesn't find the keys, but this is where they can
    find the clue for obtaining the optional collectible in the Gardens space.
    "Penelope" is a password for unlocking a Gardens gate.
    */
    if(choice == 1)
    {
      cout << endl;

      //Unicorn art by Tina Louise Herman ascii-art.de, frame by me

      cout << "   __________________________\n";
      cout << "  | \\______________________/ |\n";
      cout << "  | |                      | |\n";
      cout << "  | |                ^^    | |\n";
      cout << "  | |        ^^            | |\n";
      cout << "  | |   ,=\\.-----\"\"\"\"^==-- | |\n";
      cout << "  | |  ;;'( ,___, ,/~\\;    | |\n";
      cout << "  | |  '  )/>/   \\|-,      | |\n";
      cout << "  | |     | `\\    | \"      | |\n";
      cout << "  | |     \"   \"   \"        | |\n";
      cout << "  | |                      | |\n";
      cout << "  | |      Penelope        | |\n";
      cout << "  | |______________________| |\n";
      cout << "  |/________________________\\|\n\n";


      cout << "You search Tabitha’s desk first, and only find feeding \n";
      cout << "schedules and random notes and reminders. On the desk is a \n";
      cout << "framed illustration of a beautiful unicorn, labeled \n";
      cout << "“Penelope.” You look under the bed, and a few mice scamper \n";
      cout << "away from view. There’s nothing except pots and pans in the\n";
      cout << "kitchen drawers, and most of the trunks contain even more \n";
      cout << "paperwork. There isn’t a key in sight.\n\n";

      choice = subMenu();
    }

    //Player searches the cookie jar and finds the key item
    else if(choice == 2)
    {
      //If player already has the key
      if(array[1] == 1)
      {
        cout << endl;
        cout << "You open the lid of the cookie jar but there are still no\n";
        cout << "cookies. :(\n\n";
      }

      //If player doesn't have the key yet, change value of array[1]
      else
      {

        //Key art by me
        cout <<"   ___\n";
        cout <<"  / _ \\ \n";
        cout <<" / / \\ \\__________--__--_ \n";
        cout <<"| |   | _________   _   _)\n";
        cout <<" \\ \\_/ /         \\ | \\ | \n";
        cout <<"  \\___/           ||  || \n";
        cout <<"                  \\/  \\/ \n\n";


        cout << "You open the lid of the cookie jar, but instead of cookies \n";
        cout << "you find a large chain with several labeled keys on it! You\n";
        cout << "find a large one labeled “GREAT HALL” and pocket it.\n\n";

        //Value at array[1] goes from 0 to 1, meaning player "has" the key
        array[1] = 1;
      }

      //Call the Grounds menu
      choice = subMenu();
    }
  }

  //Return to the Courtyard
  return home;
}
