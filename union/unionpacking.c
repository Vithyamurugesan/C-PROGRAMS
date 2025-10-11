#pragma pack(1)   // force 1-byte alignment
union Test {
    int i;       // 4 bytes
    char c;      // 1 byte
};
#pragma pack()    // reset to default alignment

#include <stdio.h>
int main() {
    printf("Size of union = %zu\n", sizeof(union Test));
    return 0;
}
