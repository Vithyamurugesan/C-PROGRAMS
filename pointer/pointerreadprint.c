#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int *ptr;
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}