#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    float radius,circumference,volume,height;
    for(int i=1;i<=n;i++){
        printf("Cylinder\n");
        printf("Enter the radius:\n");
        scanf("%f",&radius);
        printf("Enter the height\n");
        scanf("%f",&height);
        circumference=2*3.14*radius;
        volume=3.14*radius*radius*height;
        printf("%f\n",radius);
        printf("%f\n",circumference);
        printf("%f\n",volume);
    
    }
    return 0;
}