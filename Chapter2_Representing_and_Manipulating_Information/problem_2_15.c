#include <stdio.h>
/*
    Using only bit-level and logical operation
    to write x == y
    If x == y return 1 else return 0
*/
int equal(int x, int y) {
    int xor = x^y;
    // if xor == 0 then x and y are equal
    return !xor;
}

int main() {
    printf("%d\n", equal(5, 5));     // 1
    printf("%d\n", equal("a", "a")); // 1
    printf("%d\n", equal(5, 6));     // 0
    printf("%d\n", equal("a", "b")); // 0
}