#ifndef CHARACTER_H
#define CHARACTER_H


#include <iostream>
using namespace std;

class Character
{
    public:
        //Constructor
        Character();//constructor to renstate variables

        void CSet_Mana(int);//sets the ammo of the character
        void CSet_Health(int);//sets the health of the characer
        void CSet_Stamina(int);//sets the stamina of the character
        void CSet_Damage();//returns the damge of the character
        void CSet_MagicDamage();//gets the bow caster damage of the character
        void CharacterSelect();//the function used to have the user selct who they would like to play

        int CGet_Mana();//returns the ammo;
        int CGet_Health();//returns the health
        int CGet_Stamina();//returns the stamina
        int CGet_Damage();//returns the damage
        int CGet_MagicDamage();//returns the bow caster damage
        void CCharStory();//returns the characters story

        string input;//for user to input answers
        string Player;//the variable that the user will choose who they play as

    private:
        //The variables for your Character choices

        //Han Solo stats
        string HSdamage;
        string HSmagicdamage;
        string HSstory;
        string HSstamina;

        //Chewie stats
        string CHdamage;
        string CHmagicdamage;
        string CHstory;
        string CHstamina;

        //Lando stats
        string Ldamage;
        string Lmagicdamage;
        string Lstory;
        string Lstamina;

        //Princess Leia stats
        string PLdamage;
        string PLmagicdamage;
        string PLstory;
        string PLstamina;



        //sets the char specific pts to the player they chose.
        int Cpts;
        int Cmana;
        int Chealth;
        int Cstamina;
        int Cdamage;
        int Cmagicdamage;
        string Cstory;


};
#endif
