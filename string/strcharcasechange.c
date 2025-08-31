#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;//upper to lower
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;//lower to upper
        }
    }
    printf("Case changed string: %s\n",str);
    return 0;
}