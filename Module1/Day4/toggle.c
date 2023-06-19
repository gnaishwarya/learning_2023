//Toggle Case

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char inputString[100];
    int i;
    printf("enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    int length = strlen(inputString);
    
    for ( i = 0; i < length; i++) {
        if (islower(inputString[i])) {
            inputString[i] = toupper(inputString[i]);
        } else if (isupper(inputString[i])) {
            inputString[i] = tolower(inputString[i]);
        }
    }
    
    printf("toggled case string: %s\n", inputString);
    
    return 0;
}


