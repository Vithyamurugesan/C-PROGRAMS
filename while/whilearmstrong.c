#include<stdio.h>
#include<math.h>
//153,9474,407
int main(){
    int num,original,sum=0,digit,n=0;
    scanf("%d",&num);
    original=num;

    int temp=num;
    while(temp!=0){
        temp/=10;
        n++;
    }
    temp=num;
    while(temp!=0){
        digit=temp%10;
        //sum+=pow(digit,n);
        sum+=(int)(pow(digit,n)+0.5);//for 153 ->double 153.99999 instead exactly 153.//so we typecast.
        temp/=10;
    }
    if(sum==original){
        printf("%d is a armstrong number",num);
    }
    else{
        printf("%d is not an armstrong number",num);
    }
    return 0;
}