#include<stdio.h>
int main(){
    int num1,num2,max,lcm;
    scanf("%d %d",&num1,&num2);//12,15
    max=(num1>num2)?num1:num2;
    lcm=max;
    while(1){
        if(lcm%num1==0 &&  lcm%num2==0){
            break;
        }
        lcm+=max;
    }
    printf("%d",lcm);
    return 0;
}