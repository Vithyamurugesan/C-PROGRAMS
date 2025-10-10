#include <stdio.h>
struct Student {
    int rollNo;
    char name[20];
    float marks;
};

// Function returns a structure
struct Student getStudent() {
    struct Student s = {4, "Kavi", 98.5};
    return s;  // returns a copy
}
int main() {
    struct Student s1 = getStudent();
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s1.rollNo, s1.name, s1.marks);
    return 0;
}
