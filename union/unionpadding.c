#include <stdio.h>

union U {
    char c;      // 1 byte
    int i;       // 4 bytes
    double d;    // 8 bytes
};

int main() {
    printf("Size of union U = %zu\n", sizeof(union U));
    return 0;
}
