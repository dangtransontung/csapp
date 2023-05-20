#include <stdio.h>

/*
    Bit set - take a data word x and a mask word m
    generate result z, that setting z to 1 at each bit position where m is 1
*/
int bis(int x, int m) {
    return x | m;
}

/*
    Bit clear
*/
int bic(int x, int m) {
    return x & (~m);
}

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y) {
    int result = bis(x, y);
}

/* Compute x^y using only calls to functions bis and bics */
int bool_xor(int x, int y) {
    int result = bis(bic(x, y), bic(y, x));
    return result;
}