#include<stdio.h>
int main(){
    int amount;
    scanf("%d",&amount);
    int notes[]={2000,500,200,100,50,20,10,5,2,1};
    int i=0;
    do{
        if(amount>=notes[i]){
            int count=amount/notes[i];
            printf("%d X %d=%d\n",count,notes[i],count*notes[i]);
            amount%=notes[i];
        }
        i++;
    }while(i<10);
    return 0;
}