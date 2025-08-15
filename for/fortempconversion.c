#include<stdio.h>
int main(){
    int i,choice;
    float temp,converted;
   
    for(i=1;i<=3;i++){
         printf("Enter the choice:");
         scanf("%d",&choice);
        if(choice==1){
            scanf("%f",&temp);
            converted=(temp*9/5)+32;
            printf("%.2f\n",converted);
        }
        else if(choice==2){
            scanf("%f",&temp);
            converted=(temp-32)*5/9;
            printf("%.2f\n",converted);
         }
        else{
            printf("Invalid input");
         }    
    }
    return 0;
}