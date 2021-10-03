/*Coding Project 1 - Dice Roll Comparison
IST 2374
09/17/2021
Nathaniel Weatherly*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    string player1;
    string player2;
    int die1;
    int die2;
    int result1;
    int result2;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    cout << "--- Welcome to the Dice Roll minigame! ---\n\nPlease enter the name of Player 1: " ;
    cin >> player1;
    cout << "Please enter the name of Player 2: ";
    cin >> player2;

    srand(time(NULL));

    result1 = (rand() % 20) + 1;
    result2 = (rand() % 20) + 1;

    cout << player1 << " rolls a " << result1;
    if (result1 == 20 || result1 == 1) {
        if(result1 == 20) {
            SetConsoleTextAttribute(h,10);
            cout << "\n*~* Critical Success *~*";
        } else {
            SetConsoleTextAttribute(h,12);
            cout << "\n!!! Critical Failure !!!";
        }
       
    }
      
    SetConsoleTextAttribute(h,15);
    cout << "\n" << player2 << " rolls a " << result2;
    if (result2 == 20 || result2 == 1) {
        if(result2 == 20) {
            SetConsoleTextAttribute(h,10);
            cout << "\n*~* Critical Success *~*";
        } else {
            SetConsoleTextAttribute(h,12);
            cout << "\n!!! Critical Failure !!!";
            
        }
       
    }
      
    SetConsoleTextAttribute(h,15);
    if (result1 > result2)
        cout << "\n" << player1 << " has won!";
    if (result1 < result2)
        cout << "\n" << player2 << " has won!";
    if (result1 == result2)
        cout << "\nEvenly matched!";
        
return 0;
}
