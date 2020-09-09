/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Lose class is an empty class whose only purpose is to be
returned from the GreatHall decisions function when the player loses the game.
******************************************************************************/

#include "Lose.hpp"

int Lose::spaceMenu()
{
  return 0;
}


Space* Lose::decisions(int (&array) [3], int*)
{
  return home;
}
