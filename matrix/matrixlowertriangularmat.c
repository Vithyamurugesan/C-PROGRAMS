#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                printf("0 ");
            }
            else{
                printf("%d ",mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}