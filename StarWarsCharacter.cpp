// Author:Robert Sarno CS1300 Fall 2017
// Recitation: 203 – G. Byrandurga Gopinath
//
// Assignment 8

#include "StarWarsCharacter.h"
#include "StarWarsGame.h"
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <ctype.h>
using namespace std;

Character::Character()
{
        //Han Solo variables declared to strings
        HSdamage = "80";
        HSmagicdamage = "50";
        HSstamina = "800";
        HSstory = "Han Solo is a human male smuggler who is a leader in the Alliance.";

        //Chewie variables declared to strings
        CHdamage = "50";
        CHmagicdamage = "100";
        CHstamina = "800";
        CHstory = "Chewbacca who goes by Chewie, is a Wookiee warrior, smuggler, and resistance fighter who is a companion of Han Solo. He is from the planet of Kashyyyk.";

        //Lando variables declared strings
        Ldamage = "70";
        Lmagicdamage = "80";
        Lstamina = "800";
        Lstory = "Lando Calrissian is male smuggler, gambler, and card player who is now the Baron Administrator of Cloud City";

        //Lei variables declared strings
        PLdamage = "100";
        PLmagicdamage = "50";
        PLstamina = "800";
        PLstory = "Princess Leia is a human female who serves as princess of Alderaan, and was a member of the Imperial Senate.";


        //The Users variables that are given value to nothing.
        Cpts = 0;
        Cdamage = 0;
        Cmagicdamage = 0;
        Cstory = "";
        Cmana = 0;
        Chealth = 0;
        Cstamina = 800;




        input = "";//just a empty input file for users use
        Player = "";//is the string of the name the player is

}



void Character::CharacterSelect()//this function is what ask the user to Choose what Character they would like to play
{
    Game g;//calling the game class into the Character class and equalling it to a variable
    while(input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6")
    {
        cout << "Would you like to be Han Solo, Chewbacca, Lando Calrissian, Princess Leia?  " << endl;
        cout << "Type 1 for Han Solo | Type 2 for Chewbacca | Type 3 for Lando Calrissian | Type 4 for Princess Leia" << endl;
        cin >> input;

        //The series of if statement get the players name and also print a photo
        if(input == "1")
        {
            Player = "Han Solo";
            g.ReadFile("HanSolo.txt");
            cout << "You have chosen Han Solo" << endl;
        }

        else if(input == "2")
        {
            Player = "Chewbacca";
            g.ReadFile("Chew.txt");
            cout << "You have chosen Chewbacca." << endl;
        }

        else if(input == "3")
        {
            g.ReadFile("CloudCity.txt");
            Player = "Lando Calrissian";
            cout << "You have chosen Lando Calrissian." << endl;
        }

        else if(input == "4")
        {
            Player = "Princess Leia";
            g.ReadFile("Leia.txt");
            cout << "You have chosen Princess Leia." << endl;
        }

        //checks if user put valid input
        else
        {
            cout << "Error: input could not be read." <<endl;
        }
    }
}


int Character::CGet_Mana()//gets the user ammo its called mana because of my original version of this game
{
    return Cmana;

}

void Character::CSet_Mana(int input)//Sets the users ammo
{
    Cmana = input;
}

int Character::CGet_Stamina()//gets the users stamina
{
    return Cstamina;
}

void Character::CSet_Stamina(int input)//sets the users stamina
{
    Cstamina = input;
}

int Character::CGet_Health()//returns the users health
{
   return Chealth;
}

void Character::CSet_Health(int input)//sets the users health
{
    if(input > 2000)//checks if user is inputing a value less then aloud amount
    {
        cout << "Error: please input a lower value." << endl;
    }

    else
    {
          Chealth = input;
    }
}

void Character::CSet_Damage()//Sets the damage of the user based by name of user
{

    if(Player == "Han Solo")
    {
        Cdamage = stoi(HSdamage);
    }

    else if(Player == "Chewbacca")
    {
        Cdamage = stoi(CHdamage);
    }

    else if(Player == "Lando Calrissian")
    {
        Cdamage = stoi(Ldamage);
    }

    else if(Player == "Princess Leia")
    {
        Cdamage = stoi(PLdamage);
    }
}

int Character::CGet_Damage()//returns the blaster pistol damage of the users character
{
    return Cdamage;
}


void Character::CSet_MagicDamage()//sets bow caster damage of the user character
{

    if(Player == "Han Solo")
    {
        Cmagicdamage = stoi(HSmagicdamage);
    }


    else if(Player == "Chewbacca")
    {
        Cmagicdamage = stoi(CHmagicdamage);
    }

    else if(Player == "Lando Calrissian")
    {
        Cmagicdamage = stoi(Lmagicdamage);
    }

    else if(Player == "Princess Leia")
    {
        Cmagicdamage = stoi(PLmagicdamage);
    }
}

int Character::CGet_MagicDamage()//returns the bowcaster damage of the user based on character
{
    return Cmagicdamage;
}


void Character::CCharStory()//This function just states the story of the user they chose(just added to make game a little more real)
{
    Game g;
    if(Player == "Han Solo")
    {
        cout << HSstory << endl;
        cout << "________________________________________________________________" << endl;
    }

    else if(Player == "Chewbacca")
    {
        cout << CHstory << endl;
        cout << "________________________________________________________________"<< endl;
    }

    else if(Player == "Lando Calrissian")
    {
        cout << Lstory << endl;
        cout << "________________________________________________________________" << endl;
    }

    else if(Player == "Princess Leia")
    {
        cout << PLstory << endl;
        cout << "________________________________________________________________"<<endl;
    }
}


