//Write a program to print exponent part of double variable in hexadecimal and binary format.


#include <stdio.h>
#include <stdint.h>

int main() {
    double num;
    int i;

    printf("Enter a double number: ");
    scanf("%lf", &num);

    // Extracting the exponent part using bit manipulation
    uint64_t *p = (uint64_t*)&num; 
    uint16_t exponent = ((*p >> 52) & 0x7FF); 

    printf("Exponent (Hexadecimal): 0x%03x\n", exponent);
    
    // Converting the exponent to binary format
    printf("Exponent (Binary): ");
    for ( i = 10; i >= 0; --i) {
        uint16_t bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}

