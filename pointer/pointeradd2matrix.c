#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr1[r][c],arr2[r][c],res[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int *p1=&arr1[0][0];
    int *p2=&arr2[0][0];
    int *p3=&res[0][0];
    for(int i=0;i<r*c;i++){
           *(p3+i)=*(p1+i)+*(p2+i);
    }
    printf("Add result\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
return 0;
    
}