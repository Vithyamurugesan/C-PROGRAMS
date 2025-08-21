#include<stdio.h>
int power(int base,int exp){
    if(exp==0)
    return 1;
    return base*power(base,exp-1);
}
int main(){
    int base,exp;
    scanf("%d %d",&base,&exp);
    int result=power(base,exp);
    printf("%d^%d=%d",base,exp,result);
    return 0;
}