/*Case Handler:
Write a C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Sentence Case
if no options are passed then it should be a normal copy*/

#include <stdio.h>
#include <ctype.h>

void convertToUpper(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        string[i] = toupper(string[i]);
        i++;
    }
}

void convertToLower(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        string[i] = tolower(string[i]);
        i++;
    }
}

void convertToSentenceCase(char *string) {
    int i = 0;
    int previousChar = '.';
    while (string[i] != '\0') {
        if (previousChar == '.' || previousChar == '\n' || previousChar == '\t' || previousChar == ' ') {
            string[i] = toupper(string[i]);
        } else {
            string[i] = tolower(string[i]);
        }
        previousChar = string[i];
        i++;
    }
}

void copyFile(FILE *source, FILE *destination, char option) {
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), source)) {
        switch (option) {
            case 'u':
                convertToUpper(buffer);
                break;
            case 'l':
                convertToLower(buffer);
                break;
            case 's':
                convertToSentenceCase(buffer);
                break;
            default:
                break;
        }
        fputs(buffer, destination);
    }
}

int main() {
    char option;
    char sourceFileName[100];
    char destinationFileName[100];

    printf("Enter the option ('u' for Upper Case, 'l' for Lower Case, 's' for Sentence Case): ");
    scanf(" %c", &option);

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    FILE *sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    FILE *destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    copyFile(sourceFile, destinationFile, option);

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}



