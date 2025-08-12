#include<stdio.h>
int main(){
    int n,first=0,second=1,next,i=1;
    scanf("%d",&n);
    do{
        printf("%d ",first);
        next=first+second;
        first=second;
        second=next;
        i++;
       
    }while(i<=n);
    return 0;
}