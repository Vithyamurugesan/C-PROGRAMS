#include<stdio.h>
struct student{
    int rollnum;
    char name[20];
    float marks;
};
struct student s1= {1,"Vithya",95.5};
struct student s2= {2,"John",97.5};

int main(){
    struct student *ptr1;
    ptr1=&s1;
    printf("%d ",ptr1->rollnum);
    printf(" %s ",ptr1->name);
    printf("%.2f",ptr1->marks);
    printf("\n");

    //Another method to access
    struct student *ptr2;
    ptr2=&s2;
    printf("%d ",(*ptr2).rollnum);
    printf(" %s ",(*ptr2).name);
    printf("%.2f",(*ptr2).marks);
    return 0;
}