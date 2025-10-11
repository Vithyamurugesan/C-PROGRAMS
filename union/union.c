#include <stdio.h>
#include<string.h>

union Value {
    int i;
    float f;
    char str[20];
};

int main() {
    union Value val;

    val.i = 42;
    printf("Integer: %d\n", val.i);

    val.f = 3.14;
    printf("Float: %.2f\n", val.f);

    strcpy(val.str, "C Language");
    printf("String: %s\n", val.str);

    return 0;
}
