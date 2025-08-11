/*Harshad Number is if number is divisible by the sum of its digit.eg:18*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0,copy=n;
    int last;
    while(n!=0){
        last=n%10;
        sum=sum+last;
        n=n/10;
    }
    if(copy%sum==0){
        printf("%d is a Harshad number",copy);
    }
    return 0;
}