#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("%c is a alphabet",ch);
    }
    else{
        printf("%c is not an alphabet",ch);
    }
    return 0;

}