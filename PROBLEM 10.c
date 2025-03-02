/*Printing the swasthika pattern.*/
#include<stdio.h>
int main(){
    int n=5;
    int mid=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==mid||j==mid||j==0 && i<=mid||i==n-1 && j<=mid||j==n-1 && i>=mid||i==0 && j>=mid){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}