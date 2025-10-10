#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(p+i)>*(p+j)){
                int temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
      for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }

}