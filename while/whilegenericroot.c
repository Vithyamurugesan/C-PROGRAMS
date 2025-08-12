/* “find the generic root” as in digital root — the single-digit value you get by repeatedly 
summing the digits of a number until only one digit remains.*/
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    while(num>9){
        int sum=0;
        while(num!=0){
            int last=num%10;
            sum+=last;
            num/=10;
        }
        num=sum;
        
    }
    printf("%d",num);
    return 0;
}
