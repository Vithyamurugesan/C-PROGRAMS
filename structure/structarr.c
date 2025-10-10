//Array of structures
#include<stdio.h>
struct student{
    int rollnum;
    char name[20];
    float marks;
};
struct student s[2];
int main(){
    for(int i=0;i<2;i++){
        scanf("%d %s %f",&s[i].rollnum,s[i].name,&s[i].marks);
    }
    for(int i=0;i<2;i++){
        printf("%d %s %.2f\n",s[i].rollnum,s[i].name,s[i].marks);
    }
    return 0;
}
