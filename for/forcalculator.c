#include<stdio.h>
int main(){
    double num1,num2,res;
    int choice;
    
    for(;;){
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        if(choice==5){
            printf("Exit\n");
            break;
        }
        printf("Enter the two numbers:");
        scanf("%lf %lf",&num1,&num2);
        if(choice==1){
            res=num1+num2;
            printf("res:%.4lf\n",res);
        }
        else if(choice==2){
            res=num1-num2;
            printf("res:%.4lf\n",res);
        }
        else if(choice==3){
            res=num1*num2;
            printf("res:%.4lf\n",res);
        }
        else if(choice==4){
            if(num2!=0){
                res=num1/num2;
                printf("res:%.4lf\n",res);
            }
            else{
                printf("Error! Division by zero.");
            }
        }
        else{
            printf("Invalid Input");
        }
    }
    return 0;
}
      