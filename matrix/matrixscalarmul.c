#include<stdio.h>
int main(){
    int rows,col;
    scanf("%d %d",&rows,&col);
    int arr[rows][col];
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int scalar;
    scanf("%d",&scalar);
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]*scalar);
        }
        printf("\n");
    }
    return 0;
}