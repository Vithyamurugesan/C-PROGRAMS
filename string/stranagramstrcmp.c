#include<stdio.h>
#include<string.h>
void sortarr(char str[]){
    int len=strlen(str);
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}
int main(){
    char str1[100];
    scanf("%s",str1);
    char str2[100];
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2)){
        printf("The strings are not anagrams\n");
        return 0;
    }
    sortarr(str1);
    sortarr(str2);
    if(strcmp(str1,str2)==0){
          printf("The strings are anagrams\n");
    } else {
        printf("The strings are not anagrams\n");
    }

    return 0;
}