#include<stdio.h>
int main(){
    int row,col,flag=1;
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]!=b[i][j]){
                flag=0;
                break;
            }
        }
    }
    if(flag){
         printf("The matrices are equal");
        }
        else{
            printf("The matrices are not equal");
        }
    return 0;
}