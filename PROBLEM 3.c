/*The Greatest digit in the number*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max=n%10;
    n/=10;
    while(n!=0){
        int last=n%10;
        n/=10;
        if(last>max){
            max=last;
            n/=10;
        }
    }
    printf("The Greatest digit in the number %d",max);
    return 0;
}
