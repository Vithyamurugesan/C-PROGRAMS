//string
// #include<stdio.h>
// int main(){
//     char source[100],dest[100];
//     fgets(source,sizeof(source),stdin);
//     char *ptr=source;
//     char *ptr1=dest;
//     while(*ptr!='\0'){
//         *ptr1=*ptr;
//          ptr++;
//          ptr1++;
//     }
//     *ptr1='\0';
//     printf("%s",dest);
//     return 0;
// }

//int
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int source[n],dest[n];
    int *ptr=source;
    int *ptr1=dest;
    for(int i=0;i<n;i++){
        scanf("%d",&source[i]);
    }
    // for(int i=0;i<n;i++){       //using index
    //     *(ptr1+i)=*(ptr+i);
    // }
    for(int i=0;i<n;i++){//using increment
        *ptr1=*ptr;
         ptr++;
         ptr1++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",dest[i]);
    }
    return 0;

   
}
