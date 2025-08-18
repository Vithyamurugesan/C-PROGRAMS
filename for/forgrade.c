#include<stdio.h>
int main(){
    int marks;
    for(;;){
        scanf("%d",&marks);
        if(marks==-1){
            printf("Exit");
            break;
        }
        if(marks>=90 &&marks<=100)
        printf("A");
        else if(marks>=80)
        printf("B");
        else if(marks>=70)
        printf("C");
        else if(marks>=60)
        printf("D");
        else if(marks>=50)
        printf("E");
        else
        printf("Fail");
    }
    return 0;
}