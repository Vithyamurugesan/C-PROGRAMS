/*Find the sum of even index values and odd index values.*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n]; 
   
    for(int i=0;i<n;i++){
        scanf("%n",&arr[i]);
    }
   
    int evenIndexSum = 0, oddIndexSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenIndexSum += arr[i]; 
        } else {
            oddIndexSum += arr[i]; 
        }
    }

    printf("Sum of elements at even indices: %d\n", evenIndexSum);
    printf("Sum of elements at odd indices: %d\n", oddIndexSum);

    return 0;
}
