/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Header file for Win class.
******************************************************************************/

#include "Space.hpp"

#ifndef WIN_HPP
#define WIN_HPP

class Win : public Space
{
public:
  virtual int spaceMenu();
  virtual Space* decisions(int (&array) [3], int*);
};

#endif
