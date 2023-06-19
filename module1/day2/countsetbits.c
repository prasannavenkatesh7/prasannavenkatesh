#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int array[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(array) / sizeof(array[0]);
    int totalBits = 0;

    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(array[i]);
    }

    printf("Total number of set bits: %d\n", totalBits);

    return 0;
}