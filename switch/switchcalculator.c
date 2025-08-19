#include<stdio.h>
int main(){
    char operator;
    scanf("%c",&operator);
    double a,b;
    scanf("%lf %lf",&a,&b);
    switch(operator){
        case '+':
        printf("The addition of two numbers is:%.2lf + %.2lf = %.2lf\n",a,b,a+b);
        break;
        case '-':
        printf("The subtraction of two numbers is:%.2lf + %.2lf = %.2lf\n",a,b,a-b);
        break;
        case '*':
        printf("The Multiplication of two numbers is:%.2lf + %.2lf = %.2lf\n",a,b,a*b);
        break;
        case '/':
        if(b!=0)
        printf("The Multiplication of two numbers is:%.2lf + %.2lf = %.2lf\n",a,b,a/b);
        else
        printf("Error!.Division by zero");
        break;
        default:
        printf("invalid Input");    
    }
    return 0;

}