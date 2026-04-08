#include <iostream>
#include_next

int main() {
  std::cout << "Enter an Integer: ";
  int num{};
  std::cin >> num;

  std::cout << num << " doubled is: " << num * 2 << '\n';
}
