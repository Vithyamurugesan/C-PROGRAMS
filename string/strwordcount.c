#include<stdio.h>
int main(){
    char str[50];
    scanf("%[^\n]s",str);
    int words=0,i=0;
    while(str[i]!='\0'){
        if((str[i]!=' ') && (i==0 ||str[i-1]==' ')){
            words++;
        }
        i++;
    }
    printf("Total words:%d",words);
    return 0;
    
}