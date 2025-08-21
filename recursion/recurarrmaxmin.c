#include<stdio.h>
int findMax(int arr[],int n,int i){
    if(i==n-1)
    return arr[i];
    int maxRest=findMax(arr,n,i+1);
    return (arr[i]>maxRest?arr[i]:maxRest);
}
int findMin(int arr[],int n,int i){
    if(i==n-1)
    return arr[i];
    int minRest=findMin(arr,n,i+1);
    return (arr[i]<minRest?arr[i]:minRest);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=findMax(arr,n,0);
    int min=findMin(arr,n,0);
    printf("%d\n",max);
    printf("%d",min);
    return 0;
}