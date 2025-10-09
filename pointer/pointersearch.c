#include<stdio.h>
int main(){
    int n;
    int key,found=0;
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(*(p+i)==key){
            printf("%d at %dth index",key,i+1);
            found=1;
            break;
        }
    }
    if(!found){
        printf("Not found");
    }
    return 0;
}