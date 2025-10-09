#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int *p=&arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]); 
        }
    }
    
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
            printf("%d ",*(p+i*c+j));
        }
        printf("\n");
    }
    return 0;

}