#include<stdio.h>
void readArray(int arr[],int n,int i){
    if(i==n)
    return;
    scanf("%d",&arr[i]);
    readArray(arr,n,i+1);
}
void printArray(int arr[],int n,int i){
    if(i==n)
    return;
    printf("%d ",arr[i]);
    printArray(arr,n,i+1);
}
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    readArray(arr,n,0);
    printArray(arr,n,0);
}