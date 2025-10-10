// #include <stdio.h>
// //using static 
// struct Student {
//     int rollNo;
//     char name[20];
//     float marks;
// };

// struct Student* getStudent() {
//     static struct Student s = {5, "Anitha", 91.2};
//     return &s;  // safe because it's static
// }

// int main() {
//     struct Student *p = getStudent();
//     printf("Roll: %d\nName: %s\nMarks: %.2f\n", p->rollNo, p->name, p->marks);
//     return 0;
// }


//using malloc
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Student {
    int rollNo;
    char name[20];
    float marks;
};

struct Student* createStudent(int roll, char name[], float marks) {
    struct Student *p = (struct Student*)malloc(sizeof(struct Student));
    p->rollNo = roll;
    strcpy(p->name, name);
    p->marks = marks;
    return p;
}

int main() {
    struct Student *s = createStudent(6, "Ravi", 88.7);
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s->rollNo, s->name, s->marks);
    free(s);  // free memory
    return 0;
}

