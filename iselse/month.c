#include<stdio.h>
int main(){
    int month,year;
    scanf("%d",&month,&year);
    int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int isleap=0,isvalid=0;
    if(month==2){
    if((year%4==0 && year%100!=0)||year%400==0){
        printf("29 days");
    }
    else{
        printf("28 days");
    }}
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        printf("31 days");
    }
   
    else if(month==4||month==6||month==9||month==11){
         printf("30 days");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}

   