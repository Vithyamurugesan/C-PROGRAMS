#include<stdio.h>
int main(){
    int num1,num2,temp;
    scanf("%d %d",&num1,&num2);//45,30
    while(num2!=0){
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    printf("%d",num1);
}
