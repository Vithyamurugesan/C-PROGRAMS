#include<stdio.h>
#include<Math.h>
int main(){
    int choice;
    printf("Enter the choice\n");
    scanf("%d",&choice);
    printf("1.linear Equation(ax+b=0)\n");
    printf("2.quadratic Equation(ax^2+bx+c=0)\n");
    switch(choice){
    case 1:{
        float a,b;
        printf("Enter the coeeficients a and b:\n");
        scanf("%f %f",&a,&b);
        if(a!=0){
            printf("Roots:%.2lf",-b/a);
        }
        else{
            printf("Invalid Equation");
        }
        break;   
    }
    case 2:{
        float a,b,c,d;
        printf("Enter the coeeficients a and b:\n");
        scanf("%f %f %f %f",&a,&b,&c,&d);
        d=b*b-4*a*c;
        if(d>0){
            printf("Roots:%.2f",-b+sqrt(d)/(2*a),-b-sqrt(d)/(2*a));
        }
        else if(d==0){
            printf("Roots:%.2f",-b/(2*a));
        }
        else{
            printf("Complex Roots");
        }
        break;   
    }
    default:
    printf("Invalid");
}
return 0;  
}