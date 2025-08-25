#include<stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
             int temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
        }
    }
}
int main(){
    int n;
    int i=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    int count=1;
    for(i=0;i<n;i++){
        if(i<n-1 && arr[i]==arr[i+1]){
            count++;
        }
        else{
            printf("Element %d->%d times\n",arr[i],count);
            count=1;
        }
    }
    return 0;
}


