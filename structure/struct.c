#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s1={1,"Vithya",90.5};
    printf("Roll No: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}

