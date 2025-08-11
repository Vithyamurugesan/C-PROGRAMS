/*Check if given two digit value pass these conditions:The given number's last digit must
 be equal to 4 and first digit should be odd digit */
 #include<stdio.h>
 int main(){
     int n;
     scanf("%d",&n);
     int last=n%10;
     while(n>9){
         n/=10;
         if(last==4 && n%2==1){
             printf("True");
         }
         else{
             printf("False");
         }
     }
     return 0;
 }