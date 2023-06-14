#include <stdio.h>

int main() {
    float n1, n2, result;
    char operator;

    printf("Enter Number1: ");
    scanf("%f", &n1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%f", &n2);

    switch (operator) {
        case '+':
            result = n1 + n2;
            printf(" %f\n",result);
            break;
        case '-':
            result = n1 - n2;
            printf("%f",result);
            break;
        case '*':
            result = n1 * n2;
            printf("%f",result);
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                printf("%f",result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

