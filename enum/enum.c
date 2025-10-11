#include <stdio.h>

int main() {
    enum days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
    
    enum days today;
    today = Wednesday;
    
    printf("Today is day number %d\n", today);  // Output: Today is day number 3
    return 0;
}
