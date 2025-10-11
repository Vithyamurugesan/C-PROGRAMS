#include <stdio.h>
#include <string.h>

typedef union {
    int i;
    float f;
    char str[20];
} Data;   // 'Data' becomes an alias for the union

int main() {
    Data d1;   // no need to write 'union' now

    d1.i = 25;
    printf("d1.i = %d\n", d1.i);

    d1.f = 3.14;
    printf("d1.f = %.2f\n", d1.f);

    strcpy(d1.str, "Hello");
    printf("d1.str = %s\n", d1.str);

    return 0;
}
