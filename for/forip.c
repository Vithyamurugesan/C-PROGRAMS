#include<stdio.h>
int main(){
    int a,b,c,d;
    for(a=0;a<=255;a++){
        for(b=0;b<=255;b++){
            for(c=0;c<=255;c++){
                for(d=0;d<=255;d++){
                    printf("%d.%d.%d.%d",a,b,c,d);
                }
            }
        }
    }
    return 0;
}