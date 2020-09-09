/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Header file for GreatHall class.
******************************************************************************/

#include "Space.hpp"

#ifndef GREATHALL_HPP
#define GREATHALL_HPP

class GreatHall : public Space
{
public:
  //Displays GreatHall description and options
  virtual int spaceMenu();

  //Displays different endings depending on array items
  virtual Space* decisions(int (&array) [3], int*);
};

#endif
