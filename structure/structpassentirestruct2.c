#include <stdio.h>
struct student {
    int rollNo;
    char name[20];
    float marks;
};
void display(struct student s){
    printf("%d %s %.2f",s.rollNo,s.name,s.marks);
}
int main(){
    struct student s2={2,"anu",80.5};
    display(s2);
    return 0;
}
