//Diff between even & odd elements

#include <stdio.h>

int main() {
    int size, i,diff;
    int evenSum = 0, oddSum = 0;
    
    printf("enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    
    diff = evenSum - oddSum;
    
    printf("sum of even elements: %d\n", evenSum);
    printf("sum of odd elements: %d\n", oddSum);
    printf("difference between even and odd elements: %d\n", diff);
    
    return 0;
}

