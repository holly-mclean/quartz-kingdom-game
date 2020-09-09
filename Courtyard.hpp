/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Header file for Courtyard class.
******************************************************************************/

#include "Space.hpp"

#ifndef COURTYARD_HPP
#define COURTYARD_HPP

class Courtyard : public Space
{
public:
  //Displays Courtyard description and options
  virtual int spaceMenu();

  //Handles player's menu decisions and returns the next Space to go to
  virtual Space* decisions(int (&array) [3], int*);
};

#endif
