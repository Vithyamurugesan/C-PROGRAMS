#include<stdio.h>
void add(int *a,int *b){
    int res=*a+*b;
    printf("%d",res);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    add(&a,&b);
    return 0;

}