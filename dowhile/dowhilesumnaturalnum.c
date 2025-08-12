#include<stdio.h>
int main(){
    int n,sum=0,i=1;
    scanf("%d",&n);
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("%d",sum);
    return 0;
}