#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cout<<"Enter the turn of last player: ";
    cin>>a;
    if (a % 2 == 0)
    {
        cout<<"The player 2 won the game.";
    }
    else 
    {
        cout<<"the player 1 won the game.";
    }
    return 0;
}