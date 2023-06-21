//Write a function to perform a search operation on the array of structures based on name of the student

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

typedef struct Student Student;

void searchStudentByName(const Student* students, int n, const char* name) {
    int found = 0,i;

    for (i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("\nStudent found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent not found.\n");
    }
}

int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student* students = (Student*)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(students[i].rollno));
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &(students[i].marks));
    }

    char searchName[20];
    printf("\nEnter the name of the student to search: ");
    scanf("%s", searchName);

    searchStudentByName(students, n, searchName);

    free(students);

    return 0;
}


