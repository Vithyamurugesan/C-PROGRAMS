#include <stdio.h>
struct student {
    int rollNo;
    char name[20];
    float marks;
};
void update(struct student *p){
    p->marks=100.0;
}
void display(struct student *p){
    printf("%d %s %.2f",p->rollNo,p->name,p->marks);
}
int main(){
    struct student s3={3,"john",84.4};
    update(&s3);
    display(&s3);
    return 0;
}