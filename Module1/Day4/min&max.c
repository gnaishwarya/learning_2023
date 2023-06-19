//Min & Max of 1D Array

#include <stdio.h>

int main() {
    int size, i;
    int min, max;
    
    printf("enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    min = arr[0];
    max = arr[0];
    
    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("minimum value: %d\n", min);
    printf("maximum value: %d\n", max);
    
    return 0;
}

