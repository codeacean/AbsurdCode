#include <iostream>

int factorial(int n) {
    // assume n is a unsigned integer
    long long product = 1;
    for (int i = 2; i <= n; i++) { 
        product *= i;
    }
    std::cout << "Product: " << product << std::endl;
    return 0;
}

int main() {
    factorial(5);
    int x = 6;
    x &= 2;
    int y = 30 & 4;
    std::cout << x << y;
    return 0;
}
