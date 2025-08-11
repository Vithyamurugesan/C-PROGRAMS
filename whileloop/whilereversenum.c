#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int original=num;
    int reverse=0;
    int remainder;
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;

    }
    printf("%d",reverse);
    return 0;

}