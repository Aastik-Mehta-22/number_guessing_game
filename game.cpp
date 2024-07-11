#include<bits/stdc++.h>
using namespace std;
class Guesser{
public:
    int guessedNum;
    int takeguesserinput(){
        int x;
        cout<<"Give the number for the guesser"<<endl;
        cin>>x;
        this->guessedNum = x;

        return guessedNum;
    }
};

class Player{
    int playerNum;

    public:
        int takeplayerinput(int n){
            int p;
            cout<<"Give the number for the player "<<n<<" : "<<endl;
            cin>>p;
            playerNum = p;

            return playerNum;
        }

};

class Umpire{
public:
    int g;
    int p1num;
    int p2num;
    int p3num;

    void GetTheNumberFromGuesser(){
        Guesser g1;
        g = g1.takeguesserinput();
    }

    void GetTheNumberFromPlayers(){
        Player p1;
        Player p2;
        Player p3;

        p1num = p1.takeplayerinput(1);
        p2num = p2.takeplayerinput(2);
        p3num = p3.takeplayerinput(3);

    }

    int PrintTheResult(){
        // g  p1num p2num p3num
        int x= 0;
        if(g == p1num && g == p2num && g == p3num){
            cout<<"All Players have won the Game 🎉"<<endl;
        }
        else{

            if(g == p1num){
                cout<<"Player 1 has won the Game 🎉"<<endl;
            }
            if(g == p2num){
                cout<<"Player 2 has won the Game 🎉"<<endl;
            }
            if(g == p3num){
                cout<<"Player 3 has won the Game 🎉"<<endl;
            }
            if(g != p1num && g != p2num && g != p3num){
                cout<<"All Players have lost the Game 🥺"<<endl;
                cout<<"Want to play More ? Type 1 else 0"<<endl;
                int t;
                cin>>t;
                x = t;
            }
        }

        return x;
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

    Umpire u;
    u.GetTheNumberFromGuesser();
    u.GetTheNumberFromPlayers();
    int x = u.PrintTheResult();
    if(x == 1) main();
    else cout<<"----------End Game----------"<<endl;
}