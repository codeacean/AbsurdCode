#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rps.h"

using namespace std;

int points;

char getComputerPick() {
    int randomNum = rand() % 3;
    if (randomNum == 0) {
        return 'r';
    } else if(randomNum == 1) {
        return 'p';
    } else {
        return 's';
    }
}

void playRPS() {

    srand(time(NULL));

    bool keepPlaying = true;
    cout << "How many round you want to play?: ";
    int roundCounter = 1;
    int maxRound;
    cin >> maxRound;

    while (keepPlaying && roundCounter <= maxRound) {

        cout << "\nStarting round " << roundCounter << endl;

        cout << "-> r for Rock, p for Paper and s for Scissors" << endl;
        cout << "Pick your choice (r/p/s): " << endl;
        char playerPick;
        cin >> playerPick;
            
        cout << "------------------" << endl;
        cout << "Your pick : " << playerPick << endl;
        cout << "Computer Pick: ";
        char computerPick = getComputerPick();

        cout << computerPick << endl;
       
        if (playerPick == computerPick) {
            cout << "It's a tie!";
            points += 15;
        } else if ((playerPick == 'r' && computerPick == 's') || 
                   (playerPick == 's' && computerPick == 'p') ||
                   (playerPick == 'p' && computerPick == 'r')) {
            
            cout << "You win" << endl;
            points += 25;
        } else {
            cout << "You lose" << endl;
            points -= 15;
        }

        roundCounter++;
        if (roundCounter > maxRound) {
            keepPlaying = false;
        }
    }
    cout << "Game Over! Total rounds played: " << (roundCounter - 1) << endl;
    cout << "Total points earned " << points << endl;
}
