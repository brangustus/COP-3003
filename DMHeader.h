#ifndef DUNGEONMASTERSHELPER_2__DMHEADER_H
#define DUNGEONMASTERSHELPER_2__DMHEADER_H

#endif //DUNGEONMASTERSHELPER_2__DMHEADER_H

void welcomeScreen();

void endingScreen();

int attackRoll();

int calcSavingThrow();


class Character{
public:
    std::array <std::string, 10> names;
    std::array <std::string, 5> party;
public:
    ///character stats

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
private:

public:
///getting name
    std::string getCharacterName(){
        for (int i=1;i<=10;i++){
            std::cout << std::endl <<"Enter name for player " << i << ":";
            //std::string nameP[i] = " ";
            std::cin >> names[i];

            //player[i].name = names[i];
            //cout << player[i].name;
            std::cout << names[i] << std::endl;
            party[i] = names[i];
        }
        std::string success = "Character entered...";
        return success;
    }
    std::string name = names[1];
///getting age

};