/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Header file for Gardens class.
******************************************************************************/

#include "Space.hpp"
#include <string>

#ifndef GARDENS_HPP
#define GARDENS_HPP

class Gardens : public Space
{
private:
  //Additional menu choices for the extra menus
  int menuCh2;
  int choice2;

  //Holds player's guesses for gate password
  std::string unicorn;
public:
  //Displays Gardens description and options
  virtual int spaceMenu();

  //Displays a submenu to prevent room description repeats
  int subMenu();

  //Additional menu for an inner area of the Gardens
  int gateMenu();

  //Handles player's menu decisions and returns the next Space to go to
  virtual Space* decisions(int (&array) [3], int*);
};

#endif
