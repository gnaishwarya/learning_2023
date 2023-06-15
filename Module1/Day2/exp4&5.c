//Write a program to find total number of bits set in a given array.(4 th and 5th questions are same)

#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array in hexadecimal format:\n");
    for ( i = 0; i < size; i++) {
        scanf("%x", &array[i]);
    }

    int totalSetBits = 0;
    for ( i = 0; i < size; i++) {
        totalSetBits += countSetBits(array[i]);
    }

    printf("Total number of set bits in the array: %d\n", totalSetBits);

    return 0;
}

