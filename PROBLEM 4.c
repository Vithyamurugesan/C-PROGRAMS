/*Find the sum of digit until it become a single digit.*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n>9){
        int sum=0;
        while(n!=0){
            int last=n%10;
            sum=sum+last;
            n=n/10;
        }
        n=sum;
    }
    printf("The sum of digits when it becomes the single digit %d",n);
    return 0;
}