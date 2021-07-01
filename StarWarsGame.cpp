// Author:Robert Sarno CS1300 Fall 2017
// Recitation: 203 – G. Byrandurga Gopinath
//
// Assignment 8

#include "StarWarsGame.h"
//#include "Enemy.h"
//#include "Character.h"
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

Game::Game()
{
    //variables declared to nothing so they dont pick up random declarations
    input = "";
    input1 = "";
    Level = 1;
    enemyname = "";
    variable = 0;
    i = 0;

}


void Game::ChooseDifficulty()
{
    while(input != "1" && input != "2")//checks is the user input is valid
    {
        cout << "What difficulty would you like to play?" << endl;
        cout << "Type 1 for easy | Type 2 if you want a challenge "<< endl;
        cin >> input;

        if(input == "1" || input == "2")
        {
            cout << "You chose difficulty " << input << "." << endl;
        }

        else
        {
            cout << "Error: Please input 1 or 2." << endl;
        }
    }
}



void Game::PrintBoard()//Creates the layout of the board based on difficulty chosen
{

    if(input == "1")//this is the easy board setup
    {

            Enemy TuskinRaider1;
            TuskinRaider1.name = "BodyGuard Droid";
            Board[0] = TuskinRaider1;
            TuskinRaider1.Set_BadHealth(1);

            Enemy StormTrooper1;
            StormTrooper1.name= "Storm Trooper";
            Board[1] = StormTrooper1;
            StormTrooper1.Set_BadHealth(3);


            Enemy TuskinRaider2;
            TuskinRaider2.name = "BodyGuard Droid";
            Board[2] = TuskinRaider2;
            TuskinRaider2.Set_BadHealth(1);

            Enemy ATST1;
            ATST1.name = "AT-ST";
            Board[3] = ATST1;
            ATST1.Set_BadHealth(4);

            Enemy Droid1;
            Droid1.name = "Droid";
            Board[4] = Droid1;
            Droid1.Set_BadHealth(2);

            Enemy Droid2;
            Droid2.name = "Droid";
            Board[5] = Droid2;
            Droid2.Set_BadHealth(2);

            Enemy ATST2;
            ATST2.name = "AT-ST";
            Board[6] = ATST2;
            ATST2.Set_BadHealth(4);

            Enemy TuskinRaider3;
            TuskinRaider3.name = "BodyGuard Droid";
            Board[7] = TuskinRaider3;
            TuskinRaider3.Set_BadHealth(1);

            Enemy Droid3;
            Droid3.name = "Droid";
            Board[8] = Droid3;
            Droid3.Set_BadHealth(2);

            Enemy StormTrooper2;
            StormTrooper2.name = "Storm Trooper";
            Board[9] = StormTrooper2;
            StormTrooper2.Set_BadHealth(3);


            Enemy StormTrooper3;
            StormTrooper3.name = "Storm Trooper";
            Board[10] = StormTrooper3;
            StormTrooper3.Set_BadHealth(3);

            Enemy Droid4;
            Droid4.name = "Droid";
            Board[11] = Droid4;
            Droid4.Set_BadHealth(2);

            Enemy TuskinRaider4;
            TuskinRaider4.name = "BodyGuard Droid";
            Board[12] = TuskinRaider4;
            TuskinRaider4.Set_BadHealth(1);

            Enemy StormTrooper4;
            StormTrooper4.name = "Storm Trooper";
            Board[13] = StormTrooper4;
            StormTrooper4.Set_BadHealth(3);

            Enemy ATAT1;
            ATAT1.name = "AT-AT";
            Board[14] = ATAT1;
            ATAT1.Set_BadHealth(4);



    }

    else if(input == "2")//While this is the hard difficulty board set up
    {
            Enemy HStormTrooper1;
            HStormTrooper1.name = "Storm Trooper";
            Board[0] = HStormTrooper1;
            HStormTrooper1.Set_BadHealth(3);

            Enemy HDroid1;
            HDroid1.name = "Droid";
            Board[1] = HDroid1;
            HDroid1.Set_BadHealth(2);

            Enemy HStormTrooper2;
            HStormTrooper2.name = "Storm Trooper";
            Board[2] = HStormTrooper2;
            HStormTrooper2.Set_BadHealth(3);

            Enemy HTusk1;
            HTusk1.name = "BodyGuard Droid";
            Board[3] = HTusk1;
            HTusk1.Set_BadHealth(1);

            Enemy HATST1;
            HATST1.name = "AT-ST";
            Board[4] = HATST1;
            HATST1.Set_BadHealth(4);

            Enemy HATST2;
            HATST2.name = "AT-ST";
            Board[5] = HATST2;
            HATST2.Set_BadHealth(4);

            Enemy HStormTrooper3;
            HStormTrooper3.name = "BodyGuard Droid";
            Board[6] = HStormTrooper3;
            HStormTrooper3.Set_BadHealth(3);

            Enemy HATAT1;
            HATAT1.name = "AT-AT";
            Board[7] = HATAT1;
            HATAT1.Set_BadHealth(5);

            Enemy HATST3;
            HATST3.name = "AT-ST";
            Board[8] = HATST3;
            HATST3.Set_BadHealth(4);

            Enemy HDroid2;
            HDroid2.name = "Droid";
            Board[9] = HDroid2;
            HDroid2.Set_BadHealth(2);

            Enemy HATAT2;
            HATAT2.name = "AT-AT";
            Board[10] = HATAT2;
            HATAT2.Set_BadHealth(5);

            Enemy HStormTrooper4;
            HStormTrooper4.name = "BodyGuard Droid";
            Board[11] = HStormTrooper4;
            HStormTrooper4.Set_BadHealth(3);

            Enemy HATST4;
            HATST4.name = "AT-ST";
            Board[12] = HATST4;
            HATST4.Set_BadHealth(4);

            Enemy HStormTrooper5;
            HStormTrooper5.name = "Storm Trooper";
            Board[13] = HStormTrooper5;
            HStormTrooper5.Set_BadHealth(3);

            Enemy HDarthVadar1;
            HDarthVadar1.name = "Darth Vadar";
            Board[14] = HDarthVadar1;
            HDarthVadar1.Set_BadHealth(6);
    }
}



void Game::GetLevel()//return to the user the position of where the character is located
{
    cout << "You are on Level, "<< Level << "." << endl;
    Level++;//adds one to level every time function is called
    return;

}



void Game::FightingSimulator()
{
        enemyname = Board[i].name;//gets the name of the enemy at board position 1
        BadGuy.Set_BadName(enemyname);//makes the name of the enemy into a variable
        cout <<"______________________________________________________________________" <<endl;
        GetLevel();
        cout <<"______________________________________________________________________" <<endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "Oh no watch out you ran into a " << enemyname << endl;
        cout << " " << endl;


        if(BadGuy.Get_BadName() == "1")//assigns the health of Duard Droid Enemy
        {
            variable = stoi(BadGuy.Get_BadName());//Gets the name of the Character thats a sting and turns it into a int
            BadGuy.Set_BadHealth(variable);// the int is used to set the health of the enemy
        }

        else if(BadGuy.Get_BadName() == "2")//assigns the health of Droid Enemy
        {
            variable = stoi(BadGuy.Get_BadName());
            BadGuy.Set_BadHealth(variable);
        }

        else if(BadGuy.Get_BadName() == "3")//assigns the health of Storm Trooper Enemy
        {
            variable = stoi(BadGuy.Get_BadName());
            BadGuy.Set_BadHealth(variable);
        }

        else if(BadGuy.Get_BadName() == "4")//assigns the health of the AT-ST Enemy
        {
            variable = stoi(BadGuy.Get_BadName());
            BadGuy.Set_BadHealth(variable);
        }

        else if(BadGuy.Get_BadName() == "5")//assigns the health of the AT-AT Enemy
        {
            variable = stoi(BadGuy.Get_BadName());
            BadGuy.Set_BadHealth(variable);
        }

        else if(BadGuy.Get_BadName() == "6")//assigns the health of the Darth Vadar Enemy
        {
            variable = stoi(BadGuy.Get_BadName());
            BadGuy.Set_BadHealth(variable);
        }

        BadGuy.Set_BadDamage(variable);//sets the damage of the Enemy based of the variables(int) it is

        //Checks if the the enemy or the User Character is Alive
        while(BadGuy.Get_Badhealth() > 0 && User.CGet_Health() > 0)
        {

                if(enemyname == "BodyGuard Droid")//this is used to print the photo of the body guard droid
                {
                    ReadFile("GuardDroid.txt");
                }

                else if(enemyname == "Droid")//this is used to print pic of droid
                {
                    ReadFile("Droid.txt");
                }

                else if(enemyname == "Storm Trooper")//this is used to print the sotrm trooper pic
                {
                    ReadFile("StromTrooper.txt");
                }

                else if(enemyname == "AT-ST")//this is used to print the atst pic
                {
                    ReadFile("ATST.txt");
                }

                else if(enemyname == "AT-AT")//this prints the atat pic
                {
                    ReadFile("ATAT.txt");
                }

                else if(enemyname == "Darth Vadar")//this pring the darth vadar pci

                {
                    ReadFile("DarthVadar.txt");
                }

            //asks user what move they would like to do
            cout << "What move would you like to do?" << endl;
            cout << "Type 1 to Attack using Blaster." << endl;
            cout << "Type 2 to Attack using BowCaster." << endl;
            cout << "Type 3 to Run away and skip this opponent...wimp." << endl;
            cout << " " << endl;
            cin >> input1;

            //stamina iis subtracted by using one
            if(input1 == "1" && User.CGet_Stamina() > 0 )//if the user decides to use blaster pistol
            {
                cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
                ReadFile("blasterpistol.txt");
                cout << "You attacked with your Blaster Pistol." << endl;
                BadGuy.Set_BadHealth(BadGuy.decrementHealth(User.CGet_Damage()));
                User.CSet_Health(User.CGet_Health() - BadGuy.Get_Baddamage());

                User.CSet_Stamina(User.CGet_Stamina() - 10);

                cout << "The " << enemyname <<" health is now " << BadGuy.Get_Badhealth() << endl;
                cout << "Your health is now " << User.CGet_Health() << endl;
                cout << " " << endl;

            }
            //ammo is removed by using bowcaster
            else if(input1 == "2" && User.CGet_Mana() > 0)//if the user decides to use bow caster
            {
                cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
                ReadFile("BowCaster.txt");
                cout << "You attacked with your BowCaster." << endl;
                BadGuy.Set_BadHealth(BadGuy.decrementHealth(User.CGet_MagicDamage()));

                User.CSet_Mana(User.CGet_Mana() - 100);
                User.CSet_Health(User.CGet_Health() - BadGuy.Get_Baddamage());
                cout << "The " << enemyname <<" health is now " << BadGuy.Get_Badhealth() << "."<<endl;
                cout << "Your health is now " << User.CGet_Health() << "."<<endl;
                cout << " " << endl;
            }
            //stamina is removed by running away
            else if(input1 == "3" && User.CGet_Stamina() > 0)//if the use decides to run away
            {
                cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
                ReadFile("Runaway.txt");
                cout << "You have run away from your opponent...Loser." << endl;
                BadGuy.Set_BadHealth(0);
                User.CSet_Stamina(User.CGet_Stamina() - 100);
            }
            //if user input incorrect option
            else
            {
                cout << "Error: The Data you inputed is either incorrect or you ran out of Ammo." << endl;
                cout <<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" <<endl;
                cout <<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" <<endl;
            }

        }

        //if the health of the enemy is 0 return all this
        if(BadGuy.Get_Badhealth() <= 0)
        {
            cout <<"______________________________________________________________________________________________" <<endl;
            cout << "You did it you have defeated your Enemy.  Here are your stats." << endl;
            cout <<"______________________________________________________________________________________________" <<endl;
            cout << "Health: " << User.CGet_Health() << endl;
            cout << "BowCaster Ammo: "<< User.CGet_Mana() << endl;
            cout << "Stamina: "<< User.CGet_Stamina() << endl;

            SaveGame("SaveGame.txt");
        }

        //if the users health is 0 return this
        else if(User.CGet_Health() <= 0)
        {
            cout << "GAME OVER THE GALACTIC EMPIRE HAS DEFEATED YOU!!!!" << endl;
            cout << "YOU ARE DEAD AND HAVE LOST!!" << endl;
            exit(0);
        }
        i++;

}

//saves game
void Game::SaveGame(string filename)
{
    ofstream in;
    in.open(filename);//assigns it to a empy file

    in << "User health: " << User.CGet_Health() <<endl;
    in << "User Ammo: "  << User.CGet_Mana() << endl;
    in << "User Stamina: " << User.CGet_Stamina() << endl;
    in << "User Blaster Pistol Damage: " << User.CGet_Damage() << endl;
    in << "User BowCaster Damage: "<< User.CGet_MagicDamage() << endl;

    in.close();

}

//Reads a file and print out the file
void Game::ReadFile(string filename)
{
    ifstream out;
    out.open(filename);
    string line;

    //checks if file is open
    if(out.fail())
    {
        cout << "File did not open!" << endl;
    }
    //reads in the lines
    else
    {
        while(getline(out, line))
        {
            cout << line << endl;
        }
    }
    out.close();

}


