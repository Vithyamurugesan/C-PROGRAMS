#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int min=(num1<num2)?num1:num2;
    int gcd=1;
    for(int i=1;i<=min;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;

}
