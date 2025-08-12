#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    do{
        int sum=0;
        do{
            int last=num%10;
            sum+=last;
            num/=10;
        }while(num!=0);
        num=sum;
    }
        while(num>9);
        printf("%d",num);
        return 0;
}

