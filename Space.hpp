/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Header file for Space class.
******************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

class Space
{
protected:
  //Pointers to the Space objects used for each "room" the player goes to
  Space* top;
  Space* right;
  Space* left;
  Space* bottom;
  Space* home;
  Space* end;
  Space* win;
  Space* lose;

  //ints to hold menu choices
  int menuCh;
  int choice;
public:
  //Setters
  void setTop(Space*);
  void setRight(Space*);
  void setLeft(Space*);
  void setBottom(Space*);
  void setHome(Space*);
  void setEnd(Space*);
  void setWin(Space*);
  void setLose(Space*);
  void setMenuCh(int);
  void setChoice(int);

  //Getters
  Space* getTop();
  Space* getRight();
  Space* getLeft();
  Space* getBottom();
  Space* getHome();
  Space* getEnd();
  Space* getWin();
  Space* getLose();
  int getMenuCh();
  int getChoice();

  //Virtual functions:

  //Displays each Space description and options
  virtual int spaceMenu();

  //Handles logic for user's choices for each Space "room"
  virtual Space* decisions(int (&array)[3], int*);
};

#endif
