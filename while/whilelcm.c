#include<stdio.h>
int main(){
    int num1,num2;
    int lcm;
    scanf("%d %d",&num1,&num2);
    lcm=num1>num2?num1:num2;
    while(1){
        if(lcm%num1==0 && lcm%num2==0){
            break;
        }
        lcm++;
    }
    printf("%d",lcm);
    return 0;
}