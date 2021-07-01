// Recitation: 203 – G. Byrandurga Gopinath
//
// Assignment 8
#include <iostream>
#include "StarWarsGame.h"
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>

//questGame



using namespace std;
int main()
{
    //varibles from different classes
    Game a;
    Character b;
    Enemy c;

    a.ReadFile("Intro.txt");
    cin.ignore();
    //step 1 let user set what difficulty they want
    cout << "Welcome to a Galaxy Far Far Away... My name is Robert Sarno and this is my quest based game." << endl;
    cout << "It is levels based and you are the chosen one. ;)" << endl;
    cout << "We will start you out by choosing the difficulty" << endl;

    //calls the function to choose the difficulty of the board
    a.ChooseDifficulty();
    cout<< "  "<< endl;


    //step 2 let user set own stats
    a.User.CharacterSelect();
    cout<< "  "<< endl;

    //reads out the character story
    a.User.CCharStory();
    cout <<"  "<< endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;


    cout << "Now that you chose your character lets set their Health and Ammo stats." << endl;
    cout<< "___________________________________________________________________________" << endl;

    cout << "You are given 2000 points you may do with them as you please." << endl;
    cout << "(Example: Inputing 100 into health will give you 1900)" << endl;
    cout << "Your Stamina and Your Weapon are already set for you." << endl;
    cout << "Set your stats wisely.." << endl;
    cout << "" << endl;
    cout << "So lets begin!" << endl;

    cout <<"____________________________________________________________________________"<<endl;

    int input1 = 0;
    string input = "";

    cout << "How many points would you like to put in Health?" << endl;
    cin >> input;
    input1 = stoi(input);
    a.User.CSet_Health(input1);
    a.User.CSet_Damage();
    a.User.CSet_MagicDamage();

    //says your stats to the user once you set them
    cout << "Your Health is now " << a.User.CGet_Health() << endl;

    a.User.CSet_Mana(2000-input1);

    cout << "Your Blaster Pistol Ammo is now " << a.User.CGet_Mana() << endl;

    cout << "Your Stamina is now " << a.User.CGet_Stamina() << endl;

    cout << "Your Blaster Pistole is now does " << a.User.CGet_Damage() << " damage."<<endl;

    cout << "Your Bow Caster now does " << a.User.CGet_MagicDamage() << " damage."<<endl;
    cout << " "<< endl;//break

    //step 3 create the board based off difficulty chosen
    a.PrintBoard();

    //step 4 starting position on board
    cout << "Now that You finished the set up... LETS BEGIN THE QUEST!!" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;

    //Step 5 Levels

    //goes through all 15 levels of the game with different obsticals
    for(int i = 0; i < 15; i++)
    {

        a.FightingSimulator();
        cout << " " << endl;
    }

    //readss the
    a.ReadFile("TheEnd.txt");





}

