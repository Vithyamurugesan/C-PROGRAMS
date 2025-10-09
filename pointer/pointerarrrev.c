#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int *start=a;
    int *end=a+n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

    
}
