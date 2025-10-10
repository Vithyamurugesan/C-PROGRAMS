#include<stdio.h>
#include<string.h>
int main(){
    char str[50],ch;
    int i=0,found=0;
    scanf("%s",str);
    int len=strlen(str);
    getchar();
    scanf("%c",&ch);
    for(i=len-1;i>=0;i--){
        if(str[i]==ch){
            printf("%c is found at pos %d\n",ch,i+1);
            found=1;
            break;
        }
    }
    if(!found){
        printf("%c is not found",ch);
    }
    return 0;


}