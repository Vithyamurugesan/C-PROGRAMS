#include<stdio.h>
#include<math.h>
//153,9474,407
int main(){
    int num,original=0,sum=0,digit,n=0;
    scanf("%d",&num);
    original=num;
    int temp=num;
    do{
        temp/=10;
        n++;
    }while(temp!=0);
    temp=num;
    do{
        digit=temp%10;
        sum+=(int)(pow(digit,n)+0.5);
        temp/=10;
    }
    while(temp!=0);
    
    if(sum==original){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }
    return 0;
}