#include<stdio.h>
int main(){
    int rows,col;
    scanf("%d %d",&rows,&col);
    int a[rows][col],b[rows][col],c[rows][col];
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}