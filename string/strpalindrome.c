#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int ispalindrome=1;
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            ispalindrome=0;
            break;
        }
    }
    if(ispalindrome){
        printf("The given string is palindrome");
    }
    else{
        printf("The given string is not a palindrome");
    }
    return 0;
}