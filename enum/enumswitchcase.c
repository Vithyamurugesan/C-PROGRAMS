#include <stdio.h>

int main() {
    // Define an enum for days of the week
    enum days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
    
    enum days today;
    today = Tuesday;

    // Use switch-case to check the value
    switch(today) {
        case Sunday:
            printf("It's Sunday! Relax.\n");
            break;
        case Monday:
            printf("It's Monday! Back to work.\n");
            break;
        case Tuesday:
        case Wednesday:
        case Thursday:
            printf("Midweek busy days.\n");
            break;
        case Friday:
            printf("Friday! Almost weekend.\n");
            break;
        case Saturday:
            printf("Saturday! Enjoy!\n");
            break;
        default:
            printf("Invalid day.\n");
    }

    return 0;
}
