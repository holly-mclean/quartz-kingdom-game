/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Function definitions for Library class. The Library contains
a spell needed to win the game.
******************************************************************************/

#include "Library.hpp"
#include "menu.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/******************************************************************************
Displays Library menu and options. The Library has 3 sections to explore, one
of which provides a spell needed to win the game. Validates and returns the
player's menu choice.
******************************************************************************/
int Library::spaceMenu()
{
  cout << endl;

  //Library and girl art by me

  cout << "|    / |    / | /|__|\\ |  \\   |  \\   |           \n";
  cout << "|   /  |   /& |/ /  \\ \\|#  \\  |   \\  |          \n";
  cout << "|  /   |  / & | /    \\ |#   \\ |    \\ |           \n";
  cout << "| /    | /    |/      \\|     \\|     \\|            \n";
  cout << "|/  @  |/     /        \\  D   |      |          \n";
  cout << "|   @  |     /          \\ D   |    M |          \n";
  cout << "|      |  @ /            \\    |\\   M |             \n";
  cout << "| #   /|  @/              \\   | \\    |          \n";
  cout << "| #  / |  /                \\  |  \\   |           \n";
  cout << "|   /  | /       /\\         \\ |   \\  |          \n";
  cout << "|  /   |/       /__\\         \\|    \\ |           \n";
  cout << "| /    /        (@@)          \\ B   \\|            \n";
  cout << "|/  & /        __/@__          \\B    |            \n";
  cout << "|   &/        / / @\\ \\          \\    |             \n";
  cout << "|   /        / / @  \\ \\          \\   |             \n";
  cout << "|  /          /______\\            \\  |              \n";
  cout << "| /             ||||               \\ |             \n";
  cout << "|/              ||||                \\|               \n";
  cout << "                d  b                              \n";



  //Current map location
  cout << "   _" << endl;
  cout << "  |_|" << endl;
  cout << " _|_|_" << endl;
  cout << "|_|_|@|" << endl;
  cout << "  |_|" << endl << endl;


  cout << "You enter the Royal Library, where the rows of books seem to go\n";
  cout << "on forever… Closest to you is the Arcane section, organized by \n";
  cout << "magic class. There are sure to be spells of all sorts hiding\n";
  cout << "within these mysterious volumes...\n\n What do you do?\n\n";

  cout << "1. Search the Divination section\n";
  cout << "2. Search the Enchantment section\n";
  cout << "3. Search the Evocation section\n";
  cout << "4. Return to the Courtyard\n";

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
Displays the same spaceMenu options, but without the description of the room.
This makes the displays easier to follow and cleaner.
******************************************************************************/
int Library::subMenu()
{
  cout << "\nWhat do you do?\n\n";
  cout << "1. Search the Divination section\n";
  cout << "2. Search the Enchantment section\n";
  cout << "3. Search the Evocation section\n";
  cout << "4. Return to the Courtyard\n";

  menuCh = checkInt();

  while(menuCh < 1 || menuCh > 4)
  {
    cout << "Please choose one of the above options: ";
    menuCh = checkInt();
  }

  return menuCh;
}



/******************************************************************************
Function that calls the menu and gets the player's menu choice for which
Library section they want to search. There are 2 sections that only have a bit
of text output, and 1 section that adds a "spell" to the player's bag, ie
changes the value of array[0]. This function uses the array parameter, but not
the stepPtr parameter.
******************************************************************************/
Space* Library::decisions(int (&array) [3], int* stepPtr)
{
  choice = spaceMenu();

  //While player's choice isn't "return to courtyard"
  while(choice != 4)
  {
    //Player searches the Divination section, but doesn't find the right spell
    if(choice == 1)
    {
      cout << endl;

      //Cereal art by me
      cout << "*          *        _    *    \n";
      cout << "     *         *   //         * \n";
      cout << "    ______________//____         \n";
      cout << "*  (_____________//_____)   *       \n";
      cout << "    \\      magic       /        \n";
      cout << "     \\      puffs     /      *   \n";
      cout << "  *   \\______________/  * \n\n";

      cout << "You find a book called “A Prediction in the Pudding” that \n";
      cout << "instantly opens up to the third page. You recite the first \n";
      cout << "spell from it, and a light mist forms just in front of you. \n";
      cout << "In the mist you see a cloudy image that gradually becomes \n";
      cout << "clearer. The image materializes into a scene of you eating a \n";
      cout << "bowl of Magic Puffs cereal. You realize the spell predicts \n";
      cout << "your next meal. Not much use against a monster...\n";
      choice = subMenu();
    }

    //Player searches the Enchantment section, but doesn't find the right spell
    else if(choice == 2)
    {
      cout << endl;

      //Book art by me
      cout << "         *                 *       \n";
      cout << "  *              *                \n";
      cout << "      ____________________      *  \n";
      cout << "     /___________________/|         \n";
      cout << "    (                   |||         \n";
      cout << "    |     101           |||  *      \n";
      cout << "    |    POWERFUL       |||         \n";
      cout << "    |   ENCHANTMENTS    |||     *   \n";
      cout << "*   |     for the       |||         \n";
      cout << "    |   WORTHY          |||  *      \n";
      cout << "    |     WIZARD        |||         \n";
      cout << "    |          \\ | /    |||         \n";
      cout << "  * |  ===------ * -    |||      *  \n";
      cout << "    |          / | \\    |||         \n";
      cout << "    |___________________||/ *       \n";
      cout << " *                   *             \n";
      cout << "        *      *              *    \n";


      cout << "As you enter the Enchantment section, you see a book to your \n";
      cout << "left start glowing a soft, yellow light. You pick it out and \n";
      cout << "see that it’s titled “101 Powerful Enchantments for the \n";
      cout << "Worthy Wizard.” You flip through the pages and come across an\n";
      cout << "illustration depicting a mage in a purple robe with sunbeams \n";
      cout << "surrounding him in a glorious halo. You cast the spell shown \n";
      cout << "on that page, and after a few seconds of seemingly nothing \n";
      cout << "happening, you look down to notice that your dress has \n";
      cout << "changed from blue to purple. You roll your eyes and put the \n";
      cout << "book back on the shelf, noticing the purple slowly fade back \n";
      cout << "to blue. Not very useful, or long-lasting at that...\n";
      choice = subMenu();
    }

    //Player searches the Evocation section and finds the correct spell
    else if(choice == 3)
    {
      //If player has already found this spell, ie check array[0]
      if(array[0] == 1)
      {
        cout << endl;
        cout << "You enter the Evocation section but no books are calling \n";
        cout << "out to you this time...\n";
      }

      //If player doesn't have this spell yet, change array[0]
      else
      {
        cout << endl;

        //Book art by me
        cout << "           *                        *         \n";
        cout << "     *                     *                   \n";
        cout << "*       __________   * __________               \n";
        cout << "       /           \\ /           \\    *        \n";
        cout << "  *   |             |     *       |               \n";
        cout << "     ||     Ex      |   *  )  *   ||            \n";
        cout << "     ||   Flammis   |   (\\ ( /)   ||                 \n";
        cout << "*    ||  Ferocitas  |    )(()(    ||     *          \n";
        cout << "     ||             |   ( ()) )   ||                 \n";
        cout << "     ||     F.      |    \\)_(/    ||                 \n";
        cout << "  *  ||  Flambago   |             ||    *          \n";
        cout << "     ||___________. | .___________||             \n";
        cout << "     |/            \\|/            \\|                 \n\n";



        cout << "Upon entering the Evocation section, you can’t help but \n";
        cout << "notice a bright, neon orange volume stand out from the rest\n";
        cout << "of the books on the shelf. As you draw closer, you feel \n";
        cout << "yourself getting a bit warmer. There’s no title on the \n";
        cout << "cover, only a beautiful illustration of terrifying flames.\n";
        cout << "You open it to the middle and see a spell called \n";
        cout << "“Flambago’s Famed Flames of Ferocity.” This looks \n";
        cout << "promising, and you quickly jot down the incantation and \n";
        cout << "pocket it.\n";

        //Value at array[0] goes from 0 to 1, meaning player "has" the spell
        array[0] = 1;
      }

      //Call the Library menu
      choice = subMenu();
    }
  }

  //Return to Courtyard
  return home;
}
