/******************************************************************************
** Final Project
** Author: Holly McLean
** Date: August 2017
** Description: Function definitions for GreatHall class. Depending on which
items the player is carrying, some endings will result in a win and some a loss.
******************************************************************************/

#include "GreatHall.hpp"
#include "menu.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;



/******************************************************************************
No menu options for this class, so simply return 0.
******************************************************************************/
int GreatHall::spaceMenu()
{
  return 0;
}



/******************************************************************************
Function to display different endings. Looks at what items have been
collected and provides different endings with different levels of success based
on array items. Uses the array parameter only.
******************************************************************************/
Space* GreatHall::decisions(int (&array) [3], int*)
{
  cout << endl;

  //Monster art by me
  cout << "                                                   \n";
  cout << "              /\\          /\\                          \n";
  cout << "              )(          )(             __          \n";
  cout << "               \\\\_-^^^^-_//             /#/|      \n";
  cout << "                ( __  __ )             /#/ |                 \n";
  cout << "                ( @^\\/^@ )            /#/  |                 \n";
  cout << "              <<)   ||   (>>     ___ /#/   |              \n";
  cout << "              <<)  {''}  (>>    ( _ \\#/    |              \n";
  cout << "         ___    /  ____  \\     / / /\\)  /^^^^^\\   \n";
  cout << "        /   )  |  (####)  |   ( ( /#/  < < ^ > >           \n";
  cout << "       / / |  /\\____**____/\\   ) (#)    \\^^^^^/             \n";
  cout << "      / / \\ \\/               \\/ /                    \n";
  cout << "     /o/   \\           ^^      /                    \n";
  cout << "    |oo|    \\                 /        *             \n";
  cout << "     \\/      |    ^^         |        / \\            \n";
  cout << "            /                 \\     __)  )           \n";
  cout << "           /                   \\   /    /           \n";
  cout << "          /           ^^^^      ) (    (             \n";
  cout << "         ( ()                  (  (     \\           \n";
  cout << "          )   ()    )           \\__)   ) \\          \n";
  cout << "         (   )  (      (                  )         \n";
  cout << "          )       ()                 )   /           \n";
  cout << "         ( ( ()        )                /            \n";
  cout << "          \\       ()              )   _/              \n";
  cout << "           ) ()  (      ()     (    _/              \n";
  cout << "          (________________________/             \n\n";



  //Current map location
  cout << "   _" << endl;
  cout << "  |@|" << endl;
  cout << " _|_|_" << endl;
  cout << "|_|_|_|" << endl;
  cout << "  |_|" << endl << endl;

  cout << "You enter the Great Hall and see, sitting on the throne, your \n";
  cout << "enemy, King Alien. His minions have loaded almost every last \n";
  cout << "citizen into his shiny silver UFO. He sees you and stands up, all\n";
  cout << "400 pounds of him, and picks up his large morning star.\n\n";

  //If player has no spell or unicorn
  if(array[0] == 0 && array[2] == 0)
  {
    //UFO art by Jonthon R. Oglesbee on ascii-art.de

    cout << "              .-'~~~~'-.         \n";
    cout << "          .-~´       __ `~-.         \n";
    cout << "        .-~        \\(oo)/   ~-.          \n";
    cout << "       (____________/~~\\_______)         \n";
    cout << "  _.-~`                         `~-._          \n";
    cout << " /O=O=O=O=O=O=O=O=O=O=O=O=O=O=O=O=O=O\\         \n";
    cout << " \\___________________________________/         \n";
    cout << "            \\x x x x x x x/                   \n";
    cout << "             \\x_x_x_x_x_x/                    \n\n";



    cout << "You taking a running start towards King Alien, and with a \n";
    cout << "mighty swing of your fist, punch him right in the slimy \n";
    cout << "stomach. He looks down at you and laughs, then picks you up and\n";
    cout << "tosses you into the UFO.\n\n";

    return lose;
  }

  //If player has only unicorn
  else if(array[0] == 0 && array[2] == 1)
  {
  cout << "                                  (((())                         \n";
  cout << "                          @@@    /*|* (())                       \n";
  cout << "                           \\ \\   \\ =  (())                    \n";
  cout << "  \\|/     /((((()           \\ \\___|  |(())                    \n";
  cout << "  -*=====((((((((((()        \\___      \\                       \n";
  cout << "  /|\\   (       ((((((())        |    \\ \\                     \n";
  cout << "        ((*        (((((())      |    / /                        \n";
  cout << "         \\    /\\     (((((()     |___@@@                       \n";
  cout << "          |  |  \\        ((()-__/   __|____(((()(               \n";
  cout << "          *__|   \\             /   /        (((((((()           \n";
  cout << "                 (             (  (           |  (())()          \n";
  cout << "                /               \\##\\           \\  (())        \n";
  cout << "                (         )      \\##\\    \\     |  ((((((      \n";
  cout << "                 \\|     /________/@/------\\    \\   (((()( ))  \n";
  cout << "                   |   /                    \\   \\      ((())   \n";
  cout << "                   |  |                      /  )       (())())  \n";
  cout << "                   (  )                     /  /      ((()))     \n";
  cout << "                   |  |                    /  /          (((     \n";
  cout << "                   /  <                   /  <                   \n";
  cout << "                  /___|                  /___|                 \n\n";


    cout << "Mounted on Penelope, you gallop towards King Alien and land a\n";
    cout << "passing punch to his face. He seems unaffected and you swing\n";
    cout << "back again for a second blow. Realizing there’s no way to \n";
    cout << "defeat him with your bare hands, you start to steer Penelope \n";
    cout << "away from Great Hall, but she turns back toward King Alien. Her\n";
    cout << "horn begins to glow a soft pink, and gets brighter and brighter\n";
    cout << "until it glows like the sun. Pointed directly at King Alien, \n";
    cout << "she releases hundreds of tiny sparks from her horn and they\n";
    cout << "hit him square in the face. He screams in agony and falls to\n";
    cout << "the floor as his body is wracked with unicorn electricity. He\n";
    cout << "totally dies!\n\n";

    return win;
  }

  //If player has only spell
  else if(array[0] == 1 && array[2] == 0)
  {
    //Art by me

    cout << "                   *                                   \n";
    cout << "                 *  )  *                               \n";
    cout << "                 (\\ ( /)      *                       \n";
    cout << "                  )(()(      /\\                       \n";
    cout << "                 ( ()) )    /  \\                      \n";
    cout << "                  \\)_(/    (((())(                    \n";
    cout << "                    @@@    /*|* (())                   \n";
    cout << "                     \\ \\   \\ =  (())                \n";
    cout << "                       \\ \\___|  |(())                \n";
    cout << "                       \\____     \\ \\                \n";
    cout << "                             \\    \\ \\               \n";
    cout << "                             |    / /                  \n";
    cout << "                             |___@@@                   \n";
    cout << "                             |      )                  \n";
    cout << "                             |     /                   \n";
    cout << "                             |    |                    \n";
    cout << "                             (    |                    \n";
    cout << "                              |   /                    \n";
    cout << "                              |  |                     \n";
    cout << "                             /____)                    \n\n";



    cout << "Walking slowly toward King Alien, you pull out Flambago’s Famed\n";
    cout << "Flames of Ferocity from your pocket and recite it, holding your\n";
    cout << "right hand in front of you, facing King Alien. Flames burst\n";
    cout << "around your hand, but you don’t feel any burning. You continue\n";
    cout << "the incantation and the flames around your hand grow in a \n";
    cout << "sphere of fire until they reach a diameter of nearly 5 feet, \n";
    cout << "then as you utter the last word they shoot straight for King \n";
    cout << "Alien. He screams in pain as he slowly burns to a crisp. You \n";
    cout << "have defeated King Alien!\n\n";

    return win;
  }

  //If player has both spell and unicorn
  else if(array[0] == 1 && array[2] == 1)
  {

    //Art by me
  cout << "                         *                                    \n";
  cout << "                       *  )  *                                 \n";
  cout << "                       (\\ ( /)      *                        \n";
  cout << "                        )(()(      /\\                        \n";
  cout << "                       ( ()) )    /  \\                        \n";
  cout << "   *                    \\)_(/    (((())(                        \n";
  cout << "                          @@@    /*|* (())                       \n";
  cout << " * | *                     \\ \\   \\ =  (())                    \n";
  cout << "  \\|/     /((((()           \\ \\___|  |(())                    \n";
  cout << "  -*=====((((((((((()        \\___      \\                       \n";
  cout << "  /|\\   (       ((((((())        |    \\ \\                     \n";
  cout << " * | *  ((*        (((((())      |    / /                        \n";
  cout << "         \\    /\\     (((((()     |___@@@                       \n";
  cout << "   *      |  |  \\        ((()-__/   __|____(((()(               \n";
  cout << "          *__|   \\             /   /        (((((((()           \n";
  cout << "                 (             (  (           |  (())()          \n";
  cout << "                /               \\##\\           \\  (())        \n";
  cout << "                (         )      \\##\\    \\     |  ((((((      \n";
  cout << "                 \\|     /________/@/------\\    \\   (((()( ))  \n";
  cout << "                   |   /                    \\   \\      ((())   \n";
  cout << "                   |  |                      /  )       (())())  \n";
  cout << "                   (  )                     /  /      ((()))     \n";
  cout << "                   |  |                    /  /          (((     \n";
  cout << "                   /  <                   /  <                   \n";
  cout << "                  /___|                  /___|                 \n\n";

    cout << "Mounted on Penelope, you being reciting Flambago’s Famed Flames\n";
    cout << "of Ferocity. As she canters around King Alien, her horn begins\n";
    cout << "to glow a soft pink. As the flames in your hand grow larger and\n";
    cout << "more dynamic, Penelope's horn grows brighter. As you utter the \n";
    cout << "last word of the incantation, the sphere of flames shoot from\n";
    cout << "your hand as dazzling sparks shoot from Penelope's horn. King\n";
    cout << "Alien screams in agony as he slowly burns, then falls to the\n";
    cout << "ground as 15000 volts of pure unicorn energy warp through his\n";
    cout << "brain. You've saved the kingdom!!\n\n";

    return win;
  }

  //Trailng else
  else
  {
    return lose;
  }
}
