#include<stdio.h>
int main(){
    char str[100];
    char *p=str;
    scanf("%s",str);
    int len=0;
    while(*p!='\0'){
        len++;
        p++;
    }
    printf("Length of string is %d",len);
    return 0;
    

}