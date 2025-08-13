#include<stdio.h>
int main(){
    long long num;
    scanf("%lld",&num);
    int evensum=0,oddsum=0,pos=1;
    long long temp=num;
    while(temp>0){
        int rem=temp%10;
        if(pos%2==1){
            oddsum+=rem;
        }
        else{
            evensum+=rem;
        }
        temp/=10;
        pos++;
    }
    printf("%d\n",oddsum);
    printf("%d\n",evensum);
    int diff=oddsum-evensum;
    if(diff<0) diff=-diff;
    if(diff==0||diff%11==0){
        printf("%d is divisible by 11",num);
    }
    else{
        printf("%d is not divisible by 11",num);
    }
    return 0;
}