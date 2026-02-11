#include <iostream>
#include "head.hpp"

using namespace std;

int main() {
    normie_calc(4,6);
    number_related();
    char firstLetter{65};
    char lastLetter{90};
    // Unused variable
    const double pi{3.14159};
    [[maybe_unused]] double gravity{9.8}; // no errors for this unused variable
    double phi{1.61803};
    cout << "\nThe value of PI: " << pi << " and Phi: " << phi << endl;
    cout << "\nThe first letter in English is: " << firstLetter<< " And last letter: " << lastLetter << endl;

    string known_people[] = {
        "Codeacean", "Alise", "Moron", "Will",
    };
    cout << "\nbtw, What's the first letter of your name? " << endl;
    char firstLetter_of_dumbass{};
    return 0;
}
