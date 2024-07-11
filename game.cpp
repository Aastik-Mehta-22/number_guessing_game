#include<bits/stdc++.h>
using namespace std;
class Guesser{
    int guessedNum;
    public:
    int takeguesserinput(){
        int x;
        cout<<"Give the number for the guesser"<<endl;
        cin>>x;
        this->guessedNum = x;

        return guessedNum;
    }
};

class Umpire{

};

class Player{
    int playerNum;

    public:
        int takeplayerinput(){
            int p;
            cout<<"Give the number guessed by the player : "<<endl;
            cin>>p;
            playerNum = p;

            return playerNum;
        }

};
int main()
{

    /*
        Basic Idea or algortihms for game
        1.Create a Umpire
        2.Get the number from the guesser
        3.Get the number from all the three players
        4.Print the result of the game
        5.End the game
     */

    cout<<"----------Let's start the Game----------"<<endl;




    cout<<"----------End Game----------"<<endl;
}