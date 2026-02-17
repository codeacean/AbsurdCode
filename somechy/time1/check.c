#include <stdio.h>
#define PI 3.14159

void show_menu() {
    printf("\nCalculator\n");
    printf("1. Calculate ( +, -, * )\n");
    printf("2. Calculate area of circle\n");
    printf("Choice (1 or 2): ");
}

int main() {
    show_menu();
    int choice;
    scanf("%d", &choice);
    
    while (getchar() != '\n');
    
    if (choice == 1) {
        float a, b;
        char op;
        
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter second number: ");
        scanf("%f", &b);
        
        printf("Choose operator (+ - *): ");
        while (getchar() != '\n');
        scanf("%c", &op);
        
        if (op == '+')      printf("%.2f + %.2f = %.2f\n", a, b, a + b);
        else if (op == '-') printf("%.2f - %.2f = %.2f\n", a, b, a - b);
        else if (op == '*') printf("%.2f * %.2f = %.2f\n", a, b, a * b);
        else                printf("Invalid operator!\n");
    }
    else if (choice == 2) {
        float r;
        printf("Enter radius: ");
        scanf("%f", &r);
        printf("Area = %.4f\n", PI * r * r);
    }
    else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}
