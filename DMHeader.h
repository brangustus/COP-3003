#ifndef DUNGEONMASTERSHELPER_2__DMHEADER_H
#define DUNGEONMASTERSHELPER_2__DMHEADER_H

#endif //DUNGEONMASTERSHELPER_2__DMHEADER_H

void welcomeScreen();

void endingScreen();

int attackRoll();

int calcSavingThrow();


class Character{
public:
    std::array <std::string, 5> names;
    std::array <std::string, 5> party;
    std::array <int, 5> ages;
public:
    ///character stats
    int age = 0;
    int hitPoints = 0;
    int strength = 0 ;
    int dexterity = 0;
    int constitution = 0;
    int intelligence = 0;
    int wisdom = 0;
    int charisma = 0;
    //mana and stamina?
    //add weapon type and proficiency as well
    //add each adventurer and assign them character info along with class skills
private:

public:
///getting name
//might make this a vector so a party can be less than 5 people
    std::string getCharacterName(){
        for (int i=0;i<5;i++){
            std::cout << std::endl <<"Enter name for player " << i+1 << ":";
            std::cin >> names[i];

            std::cout << names[i] << std::endl;
            party[i] = names[i];
        }
        std::cout << "Characters entered..." << std::endl;
        return party[0-5];
    }

///getting age
    int getCharacterAge(){
        for (int i=0;i<5;i++){
            std::cout << std::endl <<"Enter the age of player " << i+1 << ":";
            std::cin >> ages[i];

            std::cout << ages[i] << std::endl;
        }
        std::cout << "Ages entered..." << std::endl;
        return ages[0-5];
    }
};

struct Customization{
//int hpMod = 0;
int strMod = 0;
int dexMod = 0;
int constMod = 0;
int intMod = 0;
int wisMod = 0;
int charMod = 0;
    int raceSelection(){
        //print race choices and info
        std::cout << std::endl << "Dragon Born:1  [+2 strength, +1 charisma]\n"<<"Dwarf:2        [+2 constitution]\n"<<
        "Elf:3          [+2 dexterity]\n"<<"Gnome:4        [+2 intelligence]\n"<<"Half-Elf:5     [+2 charisma, "
        "+1 to 2 stats]\n"<<"Halfling:6     [+2 dexterity]\n"<<"Half-Orc:7     [+2 strength, +1 constitution]\n"<<
        "Human:8        [+1 to all ability scores]\n"<<"Tiefling:9     [+2 charisma +1 intelligence]\n";
        std::cout << std::endl << "choose a race for your character: "; // get race selection from user
        int race = 0;
        std::cin >> race;
        if (race >= 1 && race <=9){
            switch (race) {
                case 1:
                    ///Dragon Born
                    //add: 2 str,1 char
                    strMod += 2;
                    charMod += 1;
                    break;
                case 2:
                    ///Dwarf
                    //add: 2 const
                    constMod += 2;
                    //maybe hpMod as well
                    break;
                case 3:
                    ///Elf
                    //add: 2 dex
                    dexMod += 2;
                    break;
                case 4:
                    ///Gnome
                    //add: 2 int
                    intMod += 2;
                    break;
                case 5:
                    ///Half-Elf
                    //add: 2 char,1 to two other stats
                    charMod += 2;
//                    int modChoice1 = 0;
//                    int modChoice2 = 0;
//                    std::cout << std::endl <<"select 2 stats to add 1 to." << std::endl;
//                    std::cout << "strength:1\n"<<"dexterity:2\n"<<"constitution:3\n"<<"intelligence:4\n"<<"wisdom:5\n";
//
//                    std::cout << std::endl <<"stat 1: ";
//                    std::cin >> modChoice1;
//                    switch (modChoice1){
//                        case 1:
//                            strMod += 1;
//                            break;
//                        case 2:
//                            dexMod += 1;
//                            break;
//                        case 3:
//                            constMod += 1;
//                            break;
//                        case 4:
//                            intMod += 1;
//                            break;
//                        case 5:
//                            wisMod += 1;
//                            break;
//                        default:
//                            break;
//                    }
//
//                    std::cout << std::endl <<"stat 2: ";
//                    std::cin >> modChoice2;
//                    switch (modChoice2){
//                        case 1:
//                            strMod += 1;
//                            break;
//                        case 2:
//                            dexMod += 1;
//                            break;
//                        case 3:
//                            constMod += 1;
//                            break;
//                        case 4:
//                            intMod += 1;
//                            break;
//                        case 5:
//                            wisMod += 1;
//                            break;
//                        default:
//                            break;
//                    }
                    break;
                case 6:
                    ///Halfling
                    //add: 2 dex
                    dexMod += 2;
                    break;
                case 7:
                    ///Half-Orc
                    //add: 2 str, 1 const
                    strMod += 2;
                    constMod += 1;
                    break;
                case 8:
                    ///Human
                    //add: 1 to all stats
                    //might have to add separate hp mod
                    strMod += 1;
                    dexMod += 1;
                    constMod += 1;
                    intMod += 1;
                    wisMod += 1;
                    charMod += 1;
                    break;
                case 9:
                    ///Teifling
                    //add: 2 char, 1 int
                    charMod += 2;
                    intMod += 1;
                    break;
            }
        }
        else{
            std::cout << "exiting character customization..." << " ["<< race <<"] " << "is not a valid selection.";
            //might add a loop and exit conditional here.
        }
        std::array <int,6> statsMods = {strMod,dexMod,constMod,intMod,wisMod,charMod};
    return statsMods[0-6];
    }

    //race and class modifiers shortened
}raceAndClassMod;
