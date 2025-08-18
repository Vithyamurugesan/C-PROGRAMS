#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char res[100];
    int i,j=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]!='A' && str[i]!='E' && str[i]!='I'&& str[i]!='O'&& str[i]!='U' 
        && str[i]!='a' && str[i]!='e' && str[i]!='i'&& str[i]!='o'&& str[i]!='u'){
             res[j++]=str[i];

        }
    }
    res[j]='\0';
    printf("The str after removal of vowel:%s\n",res);
    return 0;

}