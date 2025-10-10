#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    char *p=a;
    char *q=b;
    scanf("%s",a);
    scanf("%s",b);
    while(*p!='\0'){
        p++;
    }
    while(*q!='\0'){
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("%s",a);

    return 0;
}