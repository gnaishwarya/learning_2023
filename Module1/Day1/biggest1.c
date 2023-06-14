#include <stdio.h>

int findLargestIfElse(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

int findLargestTernary(int n1, int n2) {
    return (n1 > n2) ? n1 : n2;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int largestIfElse = findLargestIfElse(num1, num2);
    printf("Largest number using if-else: %d\n", largestIfElse);

    int largestTernary = findLargestTernary(num1, num2);
    printf("Largest number using ternary operator: %d\n", largestTernary);

    return 0;
}

