#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],evencount=0,oddcount=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("Evencount:%d\n",evencount);
    printf("Oddcount:%d",oddcount);
    return 0;
}