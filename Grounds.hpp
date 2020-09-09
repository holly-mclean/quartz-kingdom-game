/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Header file for Grounds class.
******************************************************************************/

#include "Space.hpp"

#ifndef GROUNDS_HPP
#define GROUNDS_HPP

class Grounds : public Space
{
public:
  //Displays Grounds description and options
  virtual int spaceMenu();

  //Displays a submenu to prevent room description repeats
  int subMenu();

  //Handles player's menu decisions and returns the next Space to go to
  virtual Space* decisions(int (&array) [3], int*);
};

#endif
