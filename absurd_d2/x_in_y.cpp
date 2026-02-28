#define DAYS_IN_MONTH 29
enum days {MON = 1, TUE, WED, THU, FRI, SAT, SUN};      // enumeration constants
const char* day_names[] = { "", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

#include <iostream>
#include <cstdlib>

void day_count(int day) {
    // printf("The name is %s", NAME);
    int start_day = MON;
    int th_day = (start_day + (day-1)) % 7;
    if (th_day == 0) th_day = 7;
    std::cout << day << "th days of the month is: " << day_names[th_day] << '\n';
}
void types() {
    // chars inside single quotes are integers in machine's character set
    char x_char = 65;       // or 'A' this is ascii number of A, char(s) are 1 bytes
    int x_int = 0;          // integers are 4 bytes
    short x_short = 3;      // shorts are 2 bytes
    long x_long = 444;      // long are often 4-8 bytes
    long long x_longs = 4;  // long longs are at least 8 bytes

    // Unsigned intger -> greater than or equal zero
    unsigned int u_int;
    unsigned short u_short;

    float x_float = 0.0f;   // 32-bit floating point numbers (with suffix)
    double x_double = 0.00; // 64-bit floating point numbers (without suffix) 

    std::cout << sizeof(x_int);
}


int* power = (int*)malloc(sizeof(int));

int main() {
    day_count(11);
    free(power);
    return 0;
}
