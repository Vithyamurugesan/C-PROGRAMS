#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    char *p=a;
    char *q=b;
    scanf("%s",a);
    scanf("%s",b);
    while(*p!='\0' && *q!='\0'){
        if(*p!=*q){
            break;
        }
        p++;
        q++;
    }
    if(*p==*q){
        printf("Stings are equal");
    }
    else{
        printf("Stings are not equal");
    }
    return 0;
}