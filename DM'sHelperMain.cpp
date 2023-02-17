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
//include my personal header files here

using std::cout;
using std::cin;
using std::endl;
using std::trunc;
//______________________________________________________________________________________________________________________
//Constants
const int CRIT_HIT_ROLL = 20;
const int MIN_HIT_ROLL = 5;
//______________________________________________________________________________________________________________________
//Functions
void welcomeScreen();
void endingScreen();
int attackRoll();
int calcSavingThrow();
//______________________________________________________________________________________________________________________
//arrays for data storage
//arrays for data storage
//______________________________________________________________________________________________________________________
//Structures (will be used later)
struct Character{ //this will be included in a character and class header file later on.
    std::string name;
    int age;
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
    //mana and stamina?
    //add weapon type and proficiency as well
    //add each adventurer and assign them character info along with class skills
};
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
    return 0;
}

///prints welcome screen message and menu options
void welcomeScreen(){
    cout << "Welcome to Dungeon Master's Helper, How may we help you?" << endl;
    cout << "What would you like to do?" << endl;
    cout << "Options: \n" << "[0] Exit\n"<< "[1] Roll attacks\n" << "[2] Roll defense\n" << "[3] Character Creation\n"
    << "[4] random mob generator\n" << "[5] status effects\n" << "[6] random quest generator\n" <<
    "[7] random NPC generator\n" << "[8] other dice rolls" << endl << endl; //WIP more will be added
    cout << "enter your selection[0-8]: ";
}

///roll dice for hit or miss check for crits also add ellipse (...) with time library for dramatic effect
int attackRoll(){                                                         //(adding hit chance mods later)
    int hitOrMiss = rand() % 20+1;
    cout << "you rolled a |" << hitOrMiss << "| for hit." << endl;
    int dmgRoll = (rand() % 6+1)+(rand() % 6+1)+3;

    if (hitOrMiss == CRIT_HIT_ROLL){
        cout << "YOU HIT A WEAK-POINT!!!" << endl;
        cout << "rolling for damage" << "." << "." << "." << endl;        //add (...) for dramatic effect
        cout << "you hit the target for |" << dmgRoll << "| dmg on their weak-point!" << endl;
    }
        //check for regular hit
    else if (hitOrMiss > MIN_HIT_ROLL && hitOrMiss < CRIT_HIT_ROLL){
        cout << "You hit the target." << endl;
        cout << "rolling for damage" << "." << "." << "." << endl;        //add (...) for dramatic effect
        cout << "you hit the target for |" << dmgRoll << "| dmg. " << endl;
    }
    else{
        cout << "You Missed, LOL." << endl;
        cout << "." << "." << "." << endl;                                //add (...) for dramatic effect
        cout << "0 dmg, Slow down there big guy, you might hurt yourself." << endl;
    }
}

///just saving throws for now, armor type and checks will be added later with class modifiers
int calcSavingThrow(){
    int savingThrow = rand() % 2+1;//(keeps giving 2 for some reason)    //adding death saving throw later
    cout << "You rolled a |" << savingThrow << "| \n";
    if (savingThrow > 1){                                                //oversimplifying saving throw for now (50-50)
        cout << "You made a successful saving throw" << endl;
    }
    else{
        cout << "You failed the saving throw, prepare for injury." << endl;
    }
}

///Prints out ending scree (will soon have ascii art)
void endingScreen(){
    cout << "---------------------------------------------------------------------------------------------------------";
    cout << endl << "Thank you for using Dungeon Master's helper!! We hope you enjoyed your session :^) \n";
    cout << "---------------------------------------------------------------------------------------------------------";
    //add ascii art like a smiley face
}
