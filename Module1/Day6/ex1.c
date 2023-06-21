/*Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 
Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };*/
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

typedef struct Student Student;

void parseString(char* inputString,Student* students, int n) {
    char* token = strtok(inputString, " ");
    int i = 0;

    while (token != NULL && i < n) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strcpy(students[i].name, token);
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        token = strtok(NULL, " ");
        i++;
    }
}

int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); 

    Student* students = (Student*)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    printf("\nEnter the input string:\n");
    char inputString[100];
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; 

    parseString(inputString, students, n);

    printf("\nArray of Structures:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}



