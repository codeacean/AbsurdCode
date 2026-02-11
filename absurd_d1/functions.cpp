#include <iostream>
#include <typeinfo>
#include "head.hpp"

using namespace std;

double normie_calc(double firstNum, double secondNum) {
    double result;
    result = firstNum * secondNum;
    return result;
}
    
void loop()  {
    char operation, symbol;
    int line_length;
    std::cout << "1. Make a horizontal line; 2. Make a vertical line;";
    std::cout << "\n\nChoose an operation: ";
    std::cin >> operation;
    std::cout << "Enter a symbol: ";
    std::cin >> symbol;
    std::cout << "Enter the line length: ";
    std::cin >> line_length;
    std::cout << "\n";
    
    if (operation != 1 and operation != 2) {
        std::cout << "Invalid choice when chossing an operator...";
    }
    switch(operation) {
        case '1':
            std::cout << "\n";
            for(int i = 0; i < line_length; i++) {
                std::cout << symbol;
            }
            break;
        case '2':
            for(int i = 0; i < line_length; i++)    {
                std::cout << "\n" << symbol;
            }
            break;
    }
}

void number_related() {
    int number{20};
    float floatNumber = number + 1.678;
    double dividedResult =
        number / 45.46; // double - more precious floating point numbers
    int age{};          // const - cannot be resign again
    cout << "\nEnter you age, dumbass: ";         // age = 38; // error -> age is read-only!
    std::cin >> age;
    if (age < 18) {
        cout << "Your age is under 18";
    }
    cout << "\nthe type of variable is: ";
    cout << typeid(age).name();
}

void condition() {
    cout << "Enter your age: ";
    int age;
    cin >> age;
    if (age < 18) {
        cout << "You can not enter, you must be 18!";
        cout << "Come again " << 18-age << " years later!";
    } else if (age > 40) {
        cout << "Looks like you can not enter here."; 
        cout << "we are looking for youngers people!";
    } else {
        cout << "Wellcome to the club!";
    }
}
