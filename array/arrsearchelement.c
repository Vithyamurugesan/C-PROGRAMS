#include<stdio.h>
int main(){
    int n,found=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("%d at %dth index",key,i);
            found=1;
        }
    }
    if(!found){
        printf("Value %d  is not found in the array",key);
    }
    return 0;
}