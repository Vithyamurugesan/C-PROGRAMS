#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int countvow=0,countcons=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
        str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            countvow++;
        }
        else{
            countcons++;
        }
    }
    printf("Count of consonants: %d\n",countcons);
    printf("Count of vowels: %d",countvow);
    return 0;
}