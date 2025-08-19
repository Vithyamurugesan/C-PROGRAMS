#include<stdio.h>
int main(){
    int arr[100],n,index;
    printf("Enter the no.of elements\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the index:\n");
    scanf("%d",&index);
    if(index<0 ||index>n){
        printf("Invalid Index\n");
    }
    else{
        for(int i=index;i<n-1;i++){
            arr[i]=arr[i+1];
        }
    }
    n--;
    printf("After deletion\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}