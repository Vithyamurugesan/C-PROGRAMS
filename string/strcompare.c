#include<stdio.h>
int main(){
    char s[25];
    char s1[25];
    scanf("%s",s);
    scanf("%s",s1);
    int i=0;
    int flag=0;
    while(s[i]!='\0' && s1[i]!='\0'){
        if(s[i]!=s1[i]){
            flag=1;
            break;
        }
        i++;
    }
     if (flag == 0 && s[i] == '\0' && s1[i] == '\0')
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}