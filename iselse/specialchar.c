#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("The character is a lowercase");
    }
    else if(ch>='A' && ch<='Z'){
        printf("The character is in uppercase");
    }
    else if(ch>=0 && ch<=9){
        printf("The character is a digit");
    }
    else{
        printf("The character is a special character");
    }
    return 0;
}