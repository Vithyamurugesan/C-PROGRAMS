#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int negcount=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0){
            negcount++;
        }
    }
    printf("%d",negcount);
    return 0;
}