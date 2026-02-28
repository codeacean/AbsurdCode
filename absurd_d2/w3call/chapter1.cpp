#include <iostream>
#include <string>
using namespace std;

void opeartors() {
    int itemPrice = 1350;
    int shippingCost = 120;
    int sum = itemPrice+shippingCost;
    std::cout << sum;
}

void strings() {
    string name;
    cout << "Name?";
    getline (cin, name);
}

int main() {
    opeartors();
    return 0;
}
