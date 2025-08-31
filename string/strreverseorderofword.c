#include<stdio.h>
int main(){
    char a[100],b[100][100];
    int i,w=0,c=0;
    scanf("%[^\n]s",a);
    for(int i=0;a[i];i++){
        if(a[i]!=32){
            b[w][c++]=a[i];
        }
        else{
            b[w][c]=0;
            c=0;
            w++;
        }
    }
    b[w][c]=0;
    for(i=w;i>=0;i--){
        printf("%s ",b[i]);
    }
    return 0;
}