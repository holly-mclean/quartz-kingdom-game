/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Header file for Lose class.
******************************************************************************/

#include "Space.hpp"

#ifndef LOSE_HPP
#define LOSE_HPP

class Lose : public Space
{
public:
  virtual int spaceMenu();
  virtual Space* decisions(int (&array) [3], int*);
};

#endif
