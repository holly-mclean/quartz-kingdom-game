/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Menu function to display game's main menu, play again menu,
and an input validation function for integers.
******************************************************************************/

#include "menu.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/******************************************************************************
Main menu function to display game description, goals, and options to play or
exit.
******************************************************************************/
int menu()
{
  int choice;

  //Game description and goals
  cout << endl << endl;

  //Text art by messletters.com, font "epic"

  cout << " _______             _______   _______  _________  _______  \n";
  cout << "(  ___  ) |\\     /| (  ___  ) (  ____ ) \\__   __/ / ___   ) \n";
  cout << "| (   ) | | )   ( | | (   ) | | (    )|    ) (    \\/   )  | \n";
  cout << "| |   | | | |   | | | (___) | | (____)|    | |        /   ) \n";
  cout << "| |   | | | |   | | |  ___  | |     __)    | |       /   /  \n";
  cout << "| | /\\| | | |   | | | (   ) | | (\\ (       | |      /   /  \n";
  cout << "| ( \\ \\ | | (   ) | | )   ( | | ) \\ \\__    | |     /   (_/\\ \n";
  cout << "(____\\/_) (_______) |/     \\| |/   \\__/    )_(    (_______/ \n";

  cout << endl;

  cout << " _        _________  _         ______    _____     _______  ";
  cout << " _______  \n";
  cout << "| \\    /\\ \\__   __/ ( (    /| (  ____ \\ (  __  \\  (  ___  ) ";
  cout << "(       ) \n";
  cout << "|  \\  / /    ) (    |  \\  ( | | (    \\/ | (  \\  ) | (   ) | ";
  cout << "| () () | \n";
  cout << "|  (_/ /     | |    |   \\ | | | |       | |   ) | | |   | | ";
  cout << "| || || | \n";
  cout << "|   _ (      | |    | (\\ \\) | | | ____  | |   | | | |   | | ";
  cout << "| |(_)| | \n";
  cout << "|  ( \\ \\     | |    | | \\   | | | \\_  ) | |   ) | | |   | | ";
  cout << "| |   | | \n";
  cout << "|  /  \\ \\ ___| |___ | )  \\  | | (___) | | (__/  ) | (___) | ";
  cout << "| )   ( | \n";
  cout << "|_/    \\/ \\_______/ |/    )_) (_______) (______/  (_______) ";
  cout << "|/     \\| \n";

  cout << endl;

  cout << " _______   _______                       _______  ";
  cout << " _______  \n";
  cout << "(       ) (  ___  ) |\\     /| |\\     /| (  ____ \\ ";
  cout << "(       ) \n";
  cout << "| () () | | (   ) | ( \\   / ) | )   ( | | (    \\/ ";
  cout << "| () () | \n";
  cout << "| || || | | (___) |  \\ (_) /  | (___) | | (__     ";
  cout << "| || || | \n";
  cout << "| |(_)| | |  ___  |   \\   /   |  ___  | |  __)    ";
  cout << "| |(_)| | \n";
  cout << "| |   | | | (   ) |    ) (    | (   ) | | (       ";
  cout << "| |   | | \n";
  cout << "| )   ( | | )   ( |    | |    | )   ( | | (____/\\ ";
  cout << "| )   ( | \n";
  cout << "|/     \\| |/     \\|    \\_/    |/     \\| (_______/ ";
  cout << "|/     \\| \n";

cout << endl << endl;

  //Unicorn art by me with inspiration from pegasus@leland.stanford.edu

  cout << "                                  (((())                         \n";
  cout << "                          @@@    /*|* (())                       \n";
  cout << "                           \\ \\   \\ =  (())                    \n";
  cout << "  \\|/     /((((()           \\ \\___|  |(())                    \n";
  cout << "  -*=====((((((((((()        \\___      \\                       \n";
  cout << "  /|\\   (       ((((((())        |    \\ \\                     \n";
  cout << "        ((*        (((((())      |    / /                        \n";
  cout << "         \\    /\\     (((((()     |___@@@                       \n";
  cout << "          |  |  \\        ((()-__/   __|____(((()(               \n";
  cout << "          *__|   \\             /   /        (((((((()           \n";
  cout << "                 (             (  (           |  (())()          \n";
  cout << "                /               \\##\\           \\  (())        \n";
  cout << "                (         )      \\##\\    \\     |  ((((((      \n";
  cout << "                 \\|     /________/@/------\\    \\   (((()( ))  \n";
  cout << "                   |   /                    \\   \\      ((())   \n";
  cout << "                   |  |                      /  )       (())())  \n";
  cout << "                   (  )                     /  /      ((()))     \n";
  cout << "                   |  |                    /  /          (((     \n";
  cout << "                   /  <                   /  <                   \n";
  cout << "                  /___|                  /___|                 \n\n";


  cout << "You are Princess Shepard of the Quartz Kingdom. An evil ";
  cout << "monster, King Alien, has abducted\n";
  cout << "the entire kingdom and is holding everyone captive in the Great ";
  cout << "Hall of the Quartz Castle. You've\n";
  cout << "awakened to the realization that you are the only one to escape ";
  cout << "capture! You must find 1) a key\n";
  cout << "to unlock the Great Hall door, and 2) a spell strong enough to ";
  cout << "defeat King Alien! You must hurry\n";
  cout << "though, time is running out, and soon the monster will fly away ";
  cout << "in his UFO, kidnapping the citizens\n";
  cout << "of the Quartz Kingdom! Good luck...\n\n";

  cout << "1. Play" << endl;
  cout << "2. Exit" << endl << endl;


  //Validate user input
  choice = checkInt();
  while(choice < 1 || choice > 2)
  {
    cout << "Please choose one of the above options: ";
    choice = checkInt();
  }

  //Returns menu choice
  return choice;
}




/******************************************************************************
Play again menu function to get user choice to play again or exit the program.
******************************************************************************/
int playAgain()
{
  int choice;

  cout << "Play again?\n\n";
  cout << "1. Play again\n";
  cout << "2. Exit\n\n";

  choice = checkInt();
  while(choice < 1 || choice > 2)
  {
    cout << "Please choose one of the above options: ";
    choice = checkInt();
  }

  //Returns menu choice
  return choice;
}




/******************************************************************************
Input validation function for integers.
******************************************************************************/
int checkInt()
{
  int integer;

  //Loop for while the input is not an integer
  while(!(cin >> integer))
  {
    cout << "Please enter a valid integer." << endl;
    cin.clear();            //Clear the input line
    cin.ignore(100, '\n');  //Ignore up to 100 characters and breaks
  }

  //Return the valid integer
  return integer;
}
