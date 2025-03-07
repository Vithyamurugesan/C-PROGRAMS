/*Printing W and M pattern.*/
#include <stdio.h>
int main()
{
  int n=9;
  int mid= n/2;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j==0||j==n-1 || i==j&&i>=mid
      || i+j==n-1 && j<=mid)
      
      printf("*");
      else
      printf(" ");
    }
    printf("      ");
    for(int j=0;j<n;j++){
      if(j==0||j==n-1 || i==j&&i<=mid
      || i+j==n-1 && j>=mid)
      
      printf("*");
      else
      printf(" ");
    }
    printf("\n");
  }
 
   
}
