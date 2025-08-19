#include<stdio.h>
int main(){
    int arr[100],n,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;//reduce size
                j--;//stay at same index to check again
                
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}