#include <stdio.h>

void identifier() {
    printf("You can just identify Matrix Type.\n");
    printf("Identify Matix order...\n");
    printf("Enter m and n: ");
    int m, n;
    scanf("%d %d", &m, &n);
    switch (m) {
    case 1:
        switch (n) {
        case 3:
            printf("This is a Column Matrix.");
        }
    case 3:
        switch (n) {
        case 1:
            printf("This is a Row Matrix.");
            break;
        case 3:
            printf("This is a Square Matrix.");
            break;
        }
    }
}

int main() {
    identifier();
    return 0;
}
