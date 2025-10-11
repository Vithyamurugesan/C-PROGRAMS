#include <stdio.h>
#pragma pack(1)   // <-- force 1-byte alignment

struct packed {
    char a;     // 1 byte
    int b;      // 4 bytes
    char c;     // 1 byte
};

int main() {
    printf("Size of struct (packed): %zu\n", sizeof(struct packed));
    return 0;
}
