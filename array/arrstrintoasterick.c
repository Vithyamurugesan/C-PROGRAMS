#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str!='\0'){
            printf("*");
        }
    }
    return 0;
}