// #include<stdio.h>
// int main(){
//     char str[50],ch;
//     int i,found=0;
//     scanf("%s",str);
//     scanf(" %c",&ch);
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]==ch){
//             printf("%c is found at position %d\n",ch,i+1);
//             found=1;
//         }
//     }
//     if(!found){
//         printf("%c is not found in given string",ch);
//     }
//     return 0;

// }


//using the pointer

#include<stdio.h>
int main(){
    char str[50],ch;
    char *p=str;
    int i,found=0;
    scanf("%s",str);
    scanf(" %c",&ch);
    while(*p!='\0'){
        if(*p==ch){
            printf("%c is found at position %d\n",ch,i+1);
            found=1;
        }
        p++;
        i++;
    }
    if(!found){
        printf("%c is not found in given string",ch);
    }
    return 0;

}
