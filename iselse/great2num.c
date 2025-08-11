#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is the greatest number",a);  
    }
    else{
        printf("%d is the greatest number",b);
    }
    return 0;
}