#ifndef ENEMY_H
#define ENEMY_H


#include <iostream>
using namespace std;

class Enemy
{

    public:
        Enemy();//constructor to state variables
        void Set_BadDamage(int);//sets the enemies damage
        void Set_BadHealth(int);//sets the enemies health
        void Set_BadName(string);//sets the enemies name
        int decrementHealth(int);//removes health from the enemy

        int Get_Badhealth();// gets the enemies health
        int Get_Baddamage();//gets the enemies damage
        string Get_BadName();//gets the name of the enemy


        string name;//the empty name varible


    private:
        int Badhealth;
        int Baddamage;
};
#endif // ENEMY_H
