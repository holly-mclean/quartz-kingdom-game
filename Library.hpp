/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Header file for Library class.
******************************************************************************/

#include "Space.hpp"

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

class Library : public Space
{
public:
  //Displays Library description and options
  virtual int spaceMenu();

  //Displays a submenu to prevent room description repeats
  int subMenu();

  //Handles player's menu decisions and returns the next Space to go to
  virtual Space* decisions(int (&array) [3], int*);
};

#endif
