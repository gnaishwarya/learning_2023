//Write a program to sum every alternate elements of a given array starting for element 0

#include <stdio.h>

int main() {
    int size,i;
    printf("enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("enter the elements of the array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for ( i = 0; i < size; i += 2) {
        sum += array[i];
    }

    printf("Sum of alternate elements starting from index 0: %d\n", sum);

    return 0;
}

