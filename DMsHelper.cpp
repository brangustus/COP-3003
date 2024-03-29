/***********************************************************************************************************************
 * Name: Brandon A Johnson
 * Course Name: COP 3003
 * Course Number: CRN 15050
 **********************************************************************************************************************/
// this Program rounds 11 inputted grades and calculates an average final grade and displays it to the user.

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cstdlib>
#include "DMHFunctions.h"

#define MAX_NAME_LEN 60  // Maximum len of your name can't be more than 60

using std::cout;
using std::cin;
using std::endl;
using std::trunc;

///main function: introduction & calls to other functions
int main()
{
    welcomeScreen();
    int menuSelection = 0;
    cin >> menuSelection;
    do{
        switch (menuSelection){
            case 0:
                break;
            case 1://going to add proficiency modifier later, for now I'll just do melee,ranged,and magic. dmg typ later
                cout << endl << endl
                     << "what are you rolling for?\n" << "[0] exit\n" << "[1] melee weapon\n" << "[2] ranged weapon\n"
                     << "[3] spell casting\n" << endl;
                cout << "enter your selection: ";
                int atkWeaponSelection;
                cin >> atkWeaponSelection;
                cout << endl;
                switch (atkWeaponSelection){
                    case 0:
                        menuSelection=0;                       //exit somehow or go back to main menu, I'll decide later
                        break;
                    case 1:
                        attackRoll();                          //same as ranged and magic for now
                        break;
                    case 2:
                        attackRoll();                          //same as melee and magic for now
                        break;
                    case 3:
                        attackRoll();                          //same as melee and ranged for now
                        break;
                    default:
                        cout << "\n Not a valid option form the list. \n";
                        break;
                }
                //adding dice rolls for: D-4, D-6, D-8, two D-10, D-20
                break;
            case 2:
                for (int i=0;i<1;i++)
                {
                    calcSavingThrow();
                    break;
                }
            case 3:
                //WIP
                //for now end the program
                cout << endl;
                menuSelection=0;
                break;
            case 4:
                //WIP
                //for now end the program
                cout << endl;
                menuSelection=0;
                break;
            case 5:
                //WIP
                //for now end the program
                cout << endl;
                menuSelection=0;
                break;
            case 6:
                //WIP
                //for now end the program
                cout << endl;
                menuSelection=0;
                break;
            case 7:
                //WIP
                //for now end the program
                cout << endl;
                menuSelection=0;
                break;
            case 8:
                //WIP
                //for now end the program
                cout << endl;
                menuSelection=0;
                break;
        }
    }while (menuSelection != 0);
    endingScreen();

    //expiremental zone

//make function
//
//    for (int i=1;i<=10;i++){
//        Character player[i];
//        cout << endl <<"Enter name for player " << i << ":";
//        //std::string nameP[i] = " ";
//        cin >> names[i];
//
//        //player[i].name = names[i];
//        //cout << player[i].name;
//        cout << names[i] << endl;
//    }

//    cout << "Enter the first characters name: ";
//    std::string nameP1 = " ";
//    cin >> nameP1;
//
//    player1.name = nameP1;
//    cout << player1.name;
    Character player1;
    player1.getCharacterName();

    return 0;
}