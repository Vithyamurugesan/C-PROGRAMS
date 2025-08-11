#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n_2000,n_500,n_200,n_100,n_50,n_20,n_10,n_5,n_2,n_1;
    n_2000=a/2000;
    a%=2000;
    n_500=a/500;
    a%=500;
    n_200=a/200;
    a%=200;
    n_100=a/100;
    a%=100;
    n_50=a/50;
    a%=50;
    n_20=a/20;
    a%=20;
    n_10=a/10;
    a%=10;
    n_5=a/5;
    a%=5;
    n_2=a/2;
    a%=2;
    n_1=a/1;
    a%=1;
    printf("%d\n",n_2000);
    printf("%d\n",n_500);
    printf("%d\n",n_200);
    printf("%d\n",n_100);
    printf("%d\n",n_50);
    printf("%d\n",n_20);
    printf("%d\n",n_10);
    printf("%d\n",n_5);
    printf("%d\n",n_2);
    printf("%d\n",n_1);
    return 0;
}