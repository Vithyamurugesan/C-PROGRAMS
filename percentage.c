#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    int tot=s1+s2+s3+s4+s5;
    float per=(tot/500.0)*100;
    printf("%f",per);
    return 0;
}