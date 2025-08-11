#include<stdio.h>
int main(){
    int day,month,year;
    int isleap=0,isvalid=1;
    int daysinmonths[]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&day,&month,&year);
    if((year%4==0 && year%100!=0)||year%400==0){
        isleap=1;
    }
    if(isleap && month==2){
        daysinmonths[1]=29;
    }
    if(month<1 ||month>12){
        isvalid=0;
    }
    else if(day<1||day>daysinmonths[month-1]){
        isvalid=0;
    }
    if(isvalid){
        printf("The date is valid");
    }
    else{
        printf("The date is not valid");
    }
    return 0;
}