#include<stdio.h>
int main(){
    char str[50],ch;
    int i,found=0;
    scanf("%[^\n]s ",str);
    getchar();
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("%c is found at position %d\n",ch,i+1);
            found=1;
            break;
        }
    }
    if(!found){
        printf("%c is not found in given string",ch);
    }
    return 0;

}