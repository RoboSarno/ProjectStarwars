// Author:Robert Sarno CS1300 Fall 2017
// Recitation: 203 – G. Byrandurga Gopinath
//
// Assignment 8

#include "StarWarsEnemy.h"
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Enemy::Enemy()//constructor to state the enemy health and damage
{
    Baddamage = 0;
    Badhealth = 0;
    name = "";
}

void Enemy::Set_BadName(string input)//finds the name of who you a against
{
    if(input == "BodyGuard Droid")
    {
        name = "1";
    }

    else if(input == "Droid")
    {
        name = "2";
    }

    else if(input == "Storm Trooper")
    {
        name = "3";
    }

    else if(input == "AT-ST")
    {
        name = "4";
    }

    else if(input == "AT-AT")
    {
        name = "5";
    }

    else if(input == "Darth Vadar")
    {
        name = "6";
    }
}

string Enemy::Get_BadName()//gets the name of the enemy
{
    return name;
}


void Enemy::Set_BadDamage(int input)//sets the damage of the enemy that the user is up against
{
    if(input == 1)
    {
        Baddamage = 5;
    }

    else if(input == 2)
    {
        Baddamage = 15;
    }

    else if(input == 3)
    {
        Baddamage = 40;
    }

    else if(input == 4)
    {
        Baddamage = 50;
    }

    else if(input == 5)
    {
        Baddamage = 65;
    }

    else if(input == 6)
    {
        Baddamage = 100;
    }
}
int Enemy::decrementHealth(int damage)//this function is what removes the enemys health
{
    Badhealth = Badhealth - damage;
    return Badhealth;
}

void Enemy::Set_BadHealth(int input)//this function sets the enemys health
{
    if(input == 1)
    {
            Badhealth = 20;

    }

    else if(input == 2)
    {

            Badhealth = 40;
    }

    else if(input == 3)
    {
            Badhealth = 70;

    }

    else if(input == 4)
    {

            Badhealth = 150;

    }
    else if(input == 5)
    {

            Badhealth = 250;
    }
    else if(input == 6)
    {

            Badhealth = 350;
    }

    else if(input == 0)
    {
            Badhealth = 0;
    }
}

int Enemy::Get_Baddamage()
{
    return Baddamage;
}

int Enemy::Get_Badhealth()
{
    return Badhealth;
}
