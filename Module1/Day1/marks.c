#include <stdio.h>

typedef struct {
    int rollNo;
    char name[50];
    float phyMarks;
    float mathMarks;
    float chemiMarks;
} Student;

void printSummary(Student student) {
    float totalMarks = student.phyMarks + student.mathMarks + student.chemiMarks;
    float percentage = (totalMarks / 300) * 100;

    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Physics Marks: %.2f\n", student.phyMarks);
    printf("Math Marks: %.2f\n", student.mathMarks);
    printf("Chemistry Marks: %.2f\n", student.chemiMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
}

int main() {
    Student student;

    printf("Enter Roll No: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &student.phyMarks);

    printf("Enter Marks of Math: ");
    scanf("%f", &student.mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &student.chemiMarks);

    printf("\nStudent Summary:\n");
    printSummary(student);

    return 0;
}

