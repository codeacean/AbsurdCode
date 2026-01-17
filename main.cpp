#include <iostream>
#include "module/rps.h"

using namespace std;

double money = 10;

void earnMoney() {      // option/menu 1
    bool wantToEarn = true;
    while (wantToEarn == true) {
        cout << "You only have " << money << "$, You can't even inter the market with it!" << endl;
                
        cout << "Finding job for you...";
        cout << "\nThere's some job found!";
        cout << "\n1. Play game";
                
        char option;
        cout << "\nSelect option: ";
        cin >> option;

        double earned;
        if (option == '1') {
            cout << "Loading the game" << endl;
                playRPS();
                earned = points*2.4;
                cout << "\nYou earned " << earned << "$ from the game!";
        } else {
            cout << "People are so orginal!";
        }

        money += earned;

        cout << "Do you want to play more game?: ";
        char wantMore;
        cin >> wantMore;
        if (wantMore = 'n') {
            wantToEarn = false;
        }
    }
}

void menu() {
    std::string options[] = {
        "\n0. See you available food",
        "1. Earn money",
        "2. Buy foods",
        "3. Die"
    };

    std::string foods[] = { "\nwater", "apples" };
   
    cout << "======MENU======" << endl;
    for (const std::string& option : options) {
        cout << option << endl;
    }
    
    char selectOption;
    cout << "Select a option: " << endl;
    cin >> selectOption;
    
    if (selectOption=='1') {
        earnMoney();
    } else if (selectOption == '0') {
        cout << "<================>";
        for (const std::string& food : foods) {
            cout << food << endl;
        }
    } else if (selectOption == '3') {
        exit(0);
    } else {
        menu();
    }
}

int main () {
    
    bool playing = true;
    while (playing == true) {
        menu();
    }

    return 0;
}
