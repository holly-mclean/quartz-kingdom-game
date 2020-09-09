/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Function definitions for Space class. Most functions are pure
virtual functions. Each Space represents a "room" to explore or interact with
in the game.
******************************************************************************/

#include "Space.hpp"
#include <iostream>

using std::cout;
using std::endl;

//Setters
void Space::setTop(Space* topIn)
{
  top = topIn;
}
void Space::setRight(Space* rightIn)
{
  right = rightIn;
}
void Space::setLeft(Space* leftIn)
{
  left = leftIn;
}
void Space::setBottom(Space* bottomIn)
{
  bottom = bottomIn;
}
void Space::setHome(Space* homeIn)
{
  home = homeIn;
}
void Space::setEnd(Space* endIn)
{
  end = endIn;
}
void Space::setWin(Space* winIn)
{
  win = winIn;
}
void Space::setLose(Space* loseIn)
{
  lose = loseIn;
}
void Space::setMenuCh(int menuChIn)
{
  menuCh = menuChIn;
}
void Space::setChoice(int choiceIn)
{
  choice = choiceIn;
}

//Getters
Space* Space::getTop()
{
  return top;
}
Space* Space::getRight()
{
  return right;
}
Space* Space::getLeft()
{
  return left;
}
Space* Space::getBottom()
{
  return bottom;
}
Space* Space::getHome()
{
  return home;
}
Space* Space::getEnd()
{
  return end;
}
Space* Space::getWin()
{
  return win;
}
Space* Space::getLose()
{
  return lose;
}
int Space::getMenuCh()
{
  return menuCh;
}
int Space::getChoice()
{
  return choice;
}

//Display menu
int Space::spaceMenu()
{
  int menuChoice = 0;
  return menuChoice;
}


/******************************************************************************
Handles logic for player's menu choices. Most Space locations will use the
array parameter (when the user picks up an item), and one location uses the
int* parameter, but some Spaces do not use either.
******************************************************************************/
Space* Space::decisions(int (&array)[3], int* ptrIn)
{
  return home;
}
