/*Find the sum of even values and odd values.*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int evenValueSum = 0, oddValueSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenValueSum += arr[i]; 
        } else {
            oddValueSum += arr[i]; 
        }
    }

    printf("Sum of even values: %d\n", evenValueSum);
    printf("Sum of odd values: %d\n", oddValueSum);

    return 0;
}
