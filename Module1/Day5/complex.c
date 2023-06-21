/*Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers */


#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

typedef struct Complex Complex;

// Function to read a complex number
void readComplex(Complex* complex) {
    printf("Enter the real part: ");
    scanf("%f", &(complex->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(complex->imaginary));
}

// Function to write a complex number
void writeComplex(Complex complex) {
    printf("Complex number: %.2f + %.2fi\n", complex.real, complex.imaginary);
}

// Function to add two complex numbers
    Complex addComplex(Complex complex1,Complex complex2) {
    Complex sum;

    sum.real = complex1.real + complex2.real;
    sum.imaginary = complex1.imaginary + complex2.imaginary;

    return sum;
}

// Function to multiply two complex numbers
    Complex multiplyComplex(Complex complex1,Complex complex2) {
    Complex product;

    product.real = (complex1.real * complex2.real) - (complex1.imaginary * complex2.imaginary);
    product.imaginary = (complex1.real * complex2.imaginary) + (complex1.imaginary * complex2.real);

    return product;
}

int main() {
    Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("\nEnter the second complex number:\n");
    readComplex(&num2);

    printf("\n");
    writeComplex(num1);
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("\nSum of the two complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("\nProduct of the two complex numbers:\n");
    writeComplex(product);

    return 0;
}

 
