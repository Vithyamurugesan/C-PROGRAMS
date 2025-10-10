#include<stdio.h>
void cal(int a,int b,int *sum,float *avg){
     *sum=a+b;
     *avg=(float)*sum/2;
}
int main(){
    int a,b,sum;
    float avg;
    scanf("%d %d",&a,&b);
    cal(a,b,&sum,&avg);
    printf("%d",sum);
    printf("%.2f",avg);

}