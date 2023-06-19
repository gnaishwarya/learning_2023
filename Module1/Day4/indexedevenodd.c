//Diff between even & odd indexed elements

#include <stdio.h>

int main() {
    int size, i,diff;
    int evenSum = 0, oddSum = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    
    diff = evenSum - oddSum;
    
    printf("sum of even-indexed elements: %d\n", evenSum);
    printf("sum of odd-indexed elements: %d\n", oddSum);
    printf("difference between even-indexed and odd-indexed elements: %d\n", diff);
    
    return 0;
}

