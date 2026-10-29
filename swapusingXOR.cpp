#include <stdio.h>
int main() {
    int a = 10, b = 20;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}