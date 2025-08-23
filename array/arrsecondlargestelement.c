#include<stdio.h>
int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int secondlargest=-100000;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    if(secondlargest==-100000)
    printf("No second largest element");
    else
    printf("%d is the second largest element",secondlargest);
    return 0;
}