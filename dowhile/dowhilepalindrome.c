#include<stdio.h>
int main(){
    int num,original,reverse=0,remainder;
    scanf("%d",&num);
    num=original;
    do{
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }while(num!=0);
    if(reverse==original){
        printf("palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}