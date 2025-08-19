#include<stdio.h>
int main(){
    int arr[100],n,index,value;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the index position to insert the value(0 to %d)\n",n);
    scanf("%d",&index);
    printf("Enter the value\n");
    scanf("%d",&value);
    if(index<0 ||index>n){
        printf("Invalid Index\n");
    }
    else{
        for(int i=n;i>index;i--){
        arr[i]=arr[i-1];
        }
    }
    arr[index]=value;
    n++;
    printf("After Insertion\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}