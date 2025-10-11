#include <stdio.h>

int main() {
    enum month { Jan = 1, Feb, Mar, Apr = 10, May };
    
    printf("Feb = %d\n", Feb);  // 2 (automatically next value after Jan)
    printf("Apr = %d\n", Apr);  // 10 (custom value)
    printf("May = %d\n", May);  // 11 (next value after Apr)
    
    return 0;
}
