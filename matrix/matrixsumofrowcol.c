#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        int rowsum=0;
        for(int j=0;j<col;j++){
            rowsum+=matrix[i][j];
        }
        printf("Row %d=%d\n",i+1,rowsum);
    }
    for(int j=0;j<col;j++){
        int colsum=0;
        for(int i=0;i<row;i++){
            colsum+=matrix[i][j];
        }
        printf("Column %d=%d\n",j+1,colsum);
    }
    return 0;

}