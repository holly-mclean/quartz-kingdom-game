/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Final project game! Has a fantasy theme with sci-fi elements.
The goal is to find a key and a spell to defeat a monster. There's an optional
unicorn item, and depending on which items you have, you'll get different
endings. Art is done by either me or the sources listed above each art.
******************************************************************************/

#include <iostream>
#include "menu.hpp"
#include "Space.hpp"
#include "Courtyard.hpp"
#include "Library.hpp"
#include "Grounds.hpp"
#include "Gardens.hpp"
#include "Entryway.hpp"
#include "GreatHall.hpp"
#include "Win.hpp"
#include "Lose.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int choice;                 //menu choice
  int steps = 70;            //time limit
  int* setSteps = &steps;     //pointer to steps variable


  Space* currentRoom;
  Space* next;

  //Call main menu to display game description and options
  choice = menu();

  while(choice == 1)
  {
    /***************************************************************************
    bag[0] represents the slot for a spell.
    bag[1] represents the slot for a key.
    bag[2] represents the slot for a unicorn.
    If the value is 0, the slot is empty. If the value is 1, the slot is filled.
    ***************************************************************************/
    int bag[3] = {0, 0, 0};

    //Reset steps
    steps = 70;

    //Create game objects
    Courtyard courtyard;  //home
    Library library;      //right
    Grounds grounds;      //bottom
    Gardens gardens;      //left
    Entryway entryway;    //top
    GreatHall greathall;  //end
    Win win;              //win
    Lose lose;            //lose

    //Create main pointers
    Space* ctyd = &courtyard;
    Space* lib = &library;
    Space* grou = &grounds;
    Space* gard = &gardens;
    Space* entr = &entryway;
    Space* grthl = &greathall;
    Space* wn = &win;
    Space* ls = &lose;

    //Set objects' individual pointers:

    //Courtyard object
    courtyard.setHome(&courtyard);
    courtyard.setRight(&library);
    courtyard.setBottom(&grounds);
    courtyard.setLeft(&gardens);
    courtyard.setTop(&entryway);
    courtyard.setEnd(&greathall);
    courtyard.setWin(&win);
    courtyard.setLose(&lose);

    //Library object
    library.setHome(&courtyard);
    library.setRight(&library);
    library.setBottom(&grounds);
    library.setLeft(&gardens);
    library.setTop(&entryway);
    library.setEnd(&greathall);
    library.setWin(&win);
    library.setLose(&lose);

    //Grounds object
    grounds.setHome(&courtyard);
    grounds.setRight(&library);
    grounds.setBottom(&grounds);
    grounds.setLeft(&gardens);
    grounds.setTop(&entryway);
    grounds.setEnd(&greathall);
    grounds.setWin(&win);
    grounds.setLose(&lose);

    //Gardens object
    gardens.setHome(&courtyard);
    gardens.setRight(&library);
    gardens.setBottom(&grounds);
    gardens.setLeft(&gardens);
    gardens.setTop(&entryway);
    gardens.setEnd(&greathall);
    gardens.setWin(&win);
    gardens.setLose(&lose);

    //Entryway object
    entryway.setHome(&courtyard);
    entryway.setRight(&library);
    entryway.setBottom(&grounds);
    entryway.setLeft(&gardens);
    entryway.setTop(&entryway);
    entryway.setEnd(&greathall);
    entryway.setWin(&win);
    entryway.setLose(&lose);

    //GreatHall object
    greathall.setHome(&courtyard);
    greathall.setRight(&library);
    greathall.setBottom(&grounds);
    greathall.setLeft(&gardens);
    greathall.setTop(&entryway);
    greathall.setEnd(&greathall);
    greathall.setWin(&win);
    greathall.setLose(&lose);

    //Win object
    win.setHome(&courtyard);
    win.setRight(&library);
    win.setBottom(&grounds);
    win.setLeft(&gardens);
    win.setTop(&entryway);
    win.setEnd(&greathall);
    win.setWin(&win);
    win.setLose(&lose);

    //Lose object
    lose.setHome(&courtyard);
    lose.setRight(&library);
    lose.setBottom(&grounds);
    lose.setLeft(&gardens);
    lose.setTop(&entryway);
    lose.setEnd(&greathall);
    lose.setWin(&win);
    lose.setLose(&lose);


    //Set current Space
    currentRoom = ctyd;

    //Counter
    int i;

    //Begin game loop
    for(i = 0; currentRoom != wn && currentRoom != ls && i < steps; i++)
    {
      cout << "\n\n** TIME REMAINING: " << steps << " **\n\n";

      /*
      Call the current room's decisions function, which will return the
      next room. Reset the current room, then decrement steps.
      */
      next = currentRoom->decisions(bag, setSteps);
      currentRoom = next;
      steps--;
    }

    //If the steps run out, you lose
    if(i >= steps)
    {
      cout << "\nYou ran out of time!! You lose!\n\n";
    }

    //If Win object is returned, you win
    else if(currentRoom == wn)
    {
      cout << "\nYou win!!\n\n";
    }

    //If Lose object is returned, you lose
    else if(currentRoom == ls)
    {
      cout << "\nYou lose!!\n\n";
    }

    //Prompt user to play again or exit
    choice = playAgain();
  }

  return 0;
}
