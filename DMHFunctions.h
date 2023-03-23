#ifndef DUNGEONMASTERSHELPER_2__DMHFUNCTIONS_H
#define DUNGEONMASTERSHELPER_2__DMHFUNCTIONS_H

#endif //DUNGEONMASTERSHELPER_2__DMHFUNCTIONS_H

#include <iostream>
#include <cmath>
#include <array>
#include <iterator>
#include "DMHeader.h"

using std::cout;
using std::cin;
using std::endl;
using std::trunc;
//______________________________________________________________________________________________________________________
//Constants
const int CRIT_HIT_ROLL = 20;
const int MIN_HIT_ROLL = 5;
//______________________________________________________________________________________________________________________
//Arrays
std::array <std::string, 10> names;
std::array <std::string, 5> party;
//______________________________________________________________________________________________________________________
//Structures

//______________________________________________________________________________________________________________________
//Classes

//______________________________________________________________________________________________________________________

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
    return dmgRoll;
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
    return savingThrow;
}

///Prints out ending scree (will soon have ascii art)
void endingScreen(){
    cout << "---------------------------------------------------------------------------------------------------------";
    cout << endl << "Thank you for using Dungeon Master's helper!! We hope you enjoyed your session :^) \n";
    cout << "---------------------------------------------------------------------------------------------------------";
    //add ascii art like a smiley face
}

