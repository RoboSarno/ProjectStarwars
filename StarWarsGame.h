#ifndef GAME_H
#define GAME_H

#include "StarWarsEnemy.h"
#include "StarWarsCharacter.h"

#include <iostream>

using namespace std;

class Game
{

    public:
        Game();//constructor
        void ChooseDifficulty();//function to choose difficulty
        void PrintBoard();//prints the board based off the difficulty chosen
        void GetLevel();//return the level the user is on
        void FightingSimulator();//this is honestly my hardest function it is very complex its pretty mch just how the user and enemy fight
        void ReadFile(string);//reads a file and print it

        void SaveGame(string);//Saves the users position in the game

        Character User;//calling other classes into the this class
        Enemy BadGuy;//calling other classes into this class

    private:
        string input;//inputs for the user to use
        string input1;//inputs for the user to use
        int variable;//empty variable
        string enemyname;//the name of the enemy
        Enemy Board[15];//the board array made of enemies
        string name[15];
        int Level;//counts the level
        int i;//empty varible to keep a loop from exceeding 15 levels

};
#endif // ENEMY_H
