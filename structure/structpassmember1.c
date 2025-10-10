#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
void display(int roll,char names[],float mark){
     printf("%d %s %f",roll,names,mark);
}
int main(){
    struct student s1={1,"Vithya",80.5};
    display(s1.rollno, s1.name,s1.marks);
    return 0;
}