#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    // Designated initialization
    struct student s1 = {
        .roll = 101,
        .name = "Vithya",
        .marks = 94.5
    };

    printf("%d %s %.1f\n", s1.roll, s1.name, s1.marks);
    return 0;
}
