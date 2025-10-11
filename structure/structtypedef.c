#include <stdio.h>

typedef struct student {
    int roll;
    char name[20];
    float marks;
} Student;   // <-- 'Student' is now an alias for 'struct student'

int main() {
    Student s1;   // No need to write 'struct student'

    s1.roll = 102;
    s1.marks = 88.5;
    printf("Roll = %d, Marks = %.1f\n", s1.roll, s1.marks);
    return 0;
}
