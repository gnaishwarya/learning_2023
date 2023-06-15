//Write a program to swap any type of data passed to an function.

#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char temp[size]; 
    size_t i;
    char *ptrA = (char *)a;
    char *ptrTemp = temp;
    for ( i = 0; i < size; i++) {
        *(ptrTemp++) = *(ptrA++);
    }

    
    char *ptrB = (char *)b;
    ptrA = (char *)a;
    for ( i = 0; i < size; i++) {
        *(ptrA++) = *(ptrB++);
    }

    
    ptrTemp = temp;
    ptrB = (char *)b;
    for (i = 0; i < size; i++) {
        *(ptrB++) = *(ptrTemp++);
    }
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double c = 2.5, d = 7.8;
    printf("Before swap: x = %lf, y = %lf\n", c, d);
    swap(&c, &d, sizeof(double));
    printf("After swap: x = %lf, y = %lf\n", c, d);

    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}

