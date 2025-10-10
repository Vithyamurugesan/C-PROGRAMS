#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    char *start,*end,temp;
    start=str;
    end=str;
    while(*(end+1)!='\0'){
        end++;   
    }
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("%s",str);
    return 0;
}