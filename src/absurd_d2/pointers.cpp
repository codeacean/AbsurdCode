// Pointers + Structs
#include <iostream>

struct Person {
    char name[64];
    int age;
};

void updateInfo(struct Person *p, int age) {
    p->age = age;
}

void coreStruct(int argc, char **argv ){
    struct Person Codeacean;
    updateInfo(&Codeacean, 17);
}

int main() {
    double const PI = 3.1416;
    std::string cpp[4] = {"pointers", "structs", "classes"};
    
    double const *pPI = &PI;
    std::string *Cpp = cpp;

    std::cout << "PI address: " << pPI << '\n';
    std::cout << cpp << '\n';
    std::cout << Cpp+1; // pointers
    std::cout << "\nSecond value's memory address: " << (cpp+1) << "it is: "<< Cpp[1];
    return 0;
}
