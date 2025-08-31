#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int countalpha=0,countdigit=0,countspecialchar=0;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&& str[i]<='z')){
            countalpha++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            countdigit++;
        }
        else{
            countspecialchar++;
        }
    }
    printf("Alphabets: %d\n", countalpha);
    printf("Digits: %d\n", countdigit);
    printf("Special characters: %d\n", countspecialchar);
    return 0;
}