/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Function definitions for Gardens class. The Gardens contain an
optional collectible that will provide different endings. To get to the item,
the player has to have a password ("Penelope") to type in correctly. The
password can be found in the Grounds space.
******************************************************************************/

#include "Gardens.hpp"
#include "menu.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


/******************************************************************************
Displays Gardens menu and options. Player can explore a hedge maze or go back
to the courtyard. Exploring the hedge maze leads to an additional menu with
a hidden, optional item. Validates and returns player's menu choice.
******************************************************************************/
int Gardens::spaceMenu()
{
  cout << endl << endl;


  //Garden art by me
  cout << "+_+_+_+_+_+_           _+_+_+_+_+_+                 \n";
  cout << "            )         (                            \n";
  cout << "    #       |_________|    #                         \n";
  cout << "            |       @ |                             \n";
  cout << "            |  <--->  |         @                  \n";
  cout << "       @    |         |    __                       \n";
  cout << "            | #       |  _(  )_                          \n";
  cout << "   #        |         |                               \n";
  cout << "            |      #  |           #                \n";
  cout << "@#@#@#@#@#@#@_________@#@#@#@#@#@#@\n";
  cout << "             (   ==   (              \n";
  cout << "       @#@    \\        \\               \n";
  cout << "      #@#      )     =  )              \n";
  cout << "     @#@      /    =   /                  \n";
  cout << "             /        /      *@*           \n";
  cout << "            /  =     /      @*@         \n";
  cout << "           (        (      *@*         \n";
  cout << "            \\=       \\             \n";
  cout << "    #$#      \\   =    \\          \n";
  cout << "     $#$      \\        \\          \n";
  cout << "      #$#      )     =  )   \n\n";



  //Current map location
  cout << "   _" << endl;
  cout << "  |_|" << endl;
  cout << " _|_|_" << endl;
  cout << "|@|_|_|" << endl;
  cout << "  |_|" << endl << endl;

  cout << "You are at the entrance to the expansive Royal Gardens. There are\n";
  cout << "ornately trimmed bushes all along the perimeter, and in the \n";
  cout << "center lies a tall hedge maze that looks to be at least 50 feet \n";
  cout << "wide. There’s a small and unassuming plaque at the entrance of\n";
  cout << "the maze depicting an image of a horseshoe. \n\nWhat do you do?\n\n";

  cout << "1. Explore the hedge maze\n";
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
int Gardens::subMenu()
{
  cout << "\nWhat do you do?\n\n";
  cout << "1. Explore the hedge maze\n";
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
Additional menu for when player reaches the gate within the hedge maze.
******************************************************************************/
int Gardens::gateMenu()
{
  cout << endl;
  cout << "1. Try to enter the password\n";
  cout << "2. Try to find your way out of the maze\n\n";

  //Get user menu choice and validate integer
  menuCh2 = checkInt();

  while(menuCh2 < 1 || menuCh2 > 2)
  {
    cout << "Please choose one of the above options: ";
    menuCh2 = checkInt();
  }

  return menuCh2;
}




/******************************************************************************
Function that handles player's menu choices. If the player goes through the
maze, they have the option of trying to enter a password to unlock a gate. If
they succeed, the gate contains a unicorn item, which is not required to win
the game but provides different endings. The player also loses more time than
usual by going through the maze. This function uses both the array parameter
(if the player succeeds in opening the gate) and the stepPtr parameter (for
decreasing the clock by an additional 10 points each time they go through the
hedge maze).
******************************************************************************/
Space* Gardens::decisions(int (&array) [3], int* stepPtr)
{
  choice = spaceMenu();

  //While player doesn't choose "return to courtyard"
  while(choice != 2)
  {
    //If user already has unicorn, they don't need to go through the maze again
    if(array[2] == 1)
    {
      cout << endl;
      cout << "You start to enter the maze, but glance at your pocket watch\n";
      cout << "and realize you are running out of time!\n\n";
    }

    //If user doesn't have the unicorn yet
    else
    {
      cout << endl << endl;

      //Gate art by me
      cout << "        ^^                                  ^^          \n";
      cout << "                       ^^                               \n";
      cout << "       /^^\\                                   /^^\\      \n";
      cout << "      /    \\    )^^(                 )^^(    /    \\     \n";
      cout << "     /      \\__/    \\_____/\\ /\\_____/    \\__/      \\   \n";
      cout << "_____\\    ___   ___   ___   |   ___   ___   ___    /_____  \n";
      cout << "      )  |   | |   | |   |  |  |   | |   | |   |  (     \n";
      cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
      cout << "      |  |___| |   | |___|  |  |___| |   | |___|  |     \n";
      cout << "      |   ___  |   |  ___   |   ___  |   |  ___   |     \n";
      cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
      cout << "      |  |   | |___| |   |  |  |   | |___| |   |  |     \n";
      cout << "      |  |   |  ___  |   | @#@ |   |  ___  |   |  |     \n";
      cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
      cout << "      |  |   | |   | |   |  |  |   | |   | |   |  |     \n";
      cout << "      |  |___| |___| |___|  |  |___| |___| |___|  |     \n";
      cout << "______|_____________________|_____________________|______  \n";
      cout << "                         |     |                            \n";
      cout << "                         (     (                            \n";
      cout << "                          \\     \\                         \n";
      cout << "                           )     )                        \n\n";



      cout << "You enter the maze. The path curves and winds, and you soon \n";
      cout << "realize you are lost. Starting to panic, you begin to run as\n";
      cout << "you try to find the exit, but it seems as though you are only\n";
      cout << "getting deeper and deeper into the maze. Finally, after an \n";
      cout << "excruciatingly stressful amount of time has passed, you see a\n";
      cout << "gate up ahead. There is a combination lock made up of letters\n";
      cout << "that prevents you from passing through the gate. You notice \n";
      cout << "another plaque at the top of this gate, depicting a horseshoe\n";
      cout << "similar to the one at the beginning of the maze.\n\n";
      cout << "What do you do?\n\n";

      //Decrease step timer by 10
      *stepPtr -= 10;

      //Call second menu to try to open the gate
      choice2 = gateMenu();

      //While user chooses to try the password
      while(choice2 == 1)
      {
        //If player already has the unicorn item
        if(array[2] == 1)
        {
          cout << endl;
          cout << "You've already opened the lock!\n\n";
        }

        //Have player enter password guesses
        else
        {
          cout << endl;
          cout << "Enter your password guess (characters only):  ";

          //Get guess from player
          cin >> unicorn;

          //If player enters the correct password
          if(unicorn=="Penelope" || unicorn=="penelope" || unicorn=="PENELOPE")
          {
            cout << endl;

            //Unicorn art by cjr on ascii-art.de

            cout << "       *   \\     *         *      " << endl;
            cout << "            \\         *          " << endl;
            cout << "   *         \\\\            *   " << endl;
            cout << "          *   \\\\ *               " << endl;
            cout << "               >\\/7      *          " << endl;
            cout << "    *      _.-(6'  \\              " << endl;
            cout << "          (=___._/` \\             " << endl;
            cout << "               )  \\ |             " << endl;
            cout << "              /   / |             " << endl;
            cout << "             /    > /" << endl;
            cout << "            j    < _\\" << endl;
            cout << "        _.-' :      ``." << endl;
            cout << "        \\ r=._\\        `." << endl;
            cout << "       <`\\\\_  \\         .`-." << endl;
            cout << "        \\ r-7  `-. ._  ' .  `\\" << endl;
            cout << "        \\`,      `-.`7  7)   )" << endl;
            cout << "        \\/         \\|  \\'  / `-._" << endl;
            cout << "                   ||    .'" << endl;
            cout << "                    \\\\  (" << endl;
            cout << "                     >\\  >" << endl;
            cout << "                 ,.-' >.'" << endl;
            cout << "                <.'_.''" << endl;
            cout << "                  <'" << endl << endl;


          cout << "You hear the lock click, and quickly open the gate and \n";
          cout << "see a beautiful unicorn grazing in a quiet, peaceful \n";
          cout << "meadow. She looks up at you, and immediately approaches.\n";
          cout << "You lay a hand on her muzzle, and get the sense that the\n";
          cout << "she knows exactly what’s going on. Penelope looks at you,\n";
          cout << "awaiting your orders. She is ready to fight at your side.";
          cout << "\n\nWhat do you do?\n\n";

            //Value at array[2] goes from 0 to 1, meaning player "has" the unicorn
            array[2] = 1;
          }

          //If the password guess is incorrect
          else
          {
            cout << endl;
            cout << "You enter your guess, but the lock doesn't open.\n\n";
          }
        }

        //Call gate menu to either try password again or leave the maze
        choice2 = gateMenu();
      }

      //If player doesn't have the unicorn item, they lose more time
      if(choice2 == 2 && array[2] == 0)
      {
        cout << endl;
        cout << "You give up and backtrack your way out of the maze, taking\n";
        cout << "up precious time as you stumble your way through.\n\n";

        *stepPtr -= 10;
      }

      //If player has unicorn item, they leave without losing additional time
      else if(choice2 == 2 && array[2] == 1)
      {
        cout << endl;
        cout << "Penelope guides you safely and quickly out of the hedge maze.";
        cout << endl << endl;
      }

    }

    //Call the Gardens menu
    choice = subMenu();
  }

  //Return to the Courtyard
  return home;
}
