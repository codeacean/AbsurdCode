#define NAME "Codeacean" // Constant
// Constants are written in all-caps out of convention, not requirement
#define DAYS_IN_MONTH 29
enum days {MON = 1, TUE, WED, THU, FRI, SAT, SUN};      // enumeration constants
const char* day_names[] = { "", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

#include <stdio.h>

void day_count(int day) {
    // printf("The name is %s", NAME);
    int start_day = MON;
    int th_day = (start_day + (day-1)) % 7;
    if (th_day == 0) th_day = 7;
    printf("\n%dth days of the month is: %s", day, day_names[th_day]);
}

int main() {
    day_count(11);
    return 0;
}
