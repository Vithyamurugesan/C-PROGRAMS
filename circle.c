#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    float pi=3.14;
    float area=pi*r*r;
    printf("%.2f\n",area);
    float circumference=2*pi*r;
    printf("%.2f",circumference);
    return 0;
}