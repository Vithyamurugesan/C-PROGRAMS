#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int *p1=a;
    int *p2=b;
    for(int i=0;i<n;i++){
        *(p1+i)=*(p1+i)+*(p2+i);   
        *(p2+i)=*(p1+i)-*(p2+i);
        *(p1+i)=*(p1+i)-*(p2+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}