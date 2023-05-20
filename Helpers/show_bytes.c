#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer x, size_t size){
    for (int i = 0; i < size; ++i) {
        printf("%.2x ", x[i]);
    }
    printf("\n");
}