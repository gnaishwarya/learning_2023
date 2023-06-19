//Convert String as Integer

#include <stdio.h>

int strToInt(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;
    
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }
    
    while (str[i] != '\0') {
        int digit = str[i] - '0';
        result = result * 10 + digit;
        
        i++;
    }
    result = result * sign;
    
    return result;
}

int main() {
    char inputStr[100];
    
    printf("enter a string: ");
    scanf("%s", inputStr);
    
    int result = strToInt(inputStr);
    
    printf("Converted integer: %d\n", result);
    
    return 0;
}

