#include<stdio.h>
int sumArray(int arr[],int n,int i){
    if(i==n)
    return 0;
    return arr[i]+sumArray(arr,n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=sumArray(arr,n,0);
    printf("%d",sum);
    return 0;
}