//Write a program to demonstrate the swapping the fields of two structures using pointers

#include <stdio.h>
#include <string.h>



struct Person {
    char name[50];
    int age;
};

typedef struct Person Person;

void swapFields(Person* person1,Person* person2) {
    // Swap the name field
    char tempName[50];
    strcpy(tempName, person1->name);
    strcpy(person1->name, person2->name);
    strcpy(person2->name, tempName);

    // Swap the age field
    int tempAge = person1->age;
    person1->age = person2->age;
    person2->age = tempAge;
}

int main() {
    Person person1, person2;

    printf("Enter details for person 1:\n");
    printf("Name: ");
    scanf("%s", person1.name);
    printf("Age: ");
    scanf("%d", &(person1.age));

    printf("\nEnter details for person 2:\n");
    printf("Name: ");
    scanf("%s", person2.name);
    printf("Age: ");
    scanf("%d", &(person2.age));

    printf("\nBefore swapping:\n");
    printf("Person 1: Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person 2: Name: %s, Age: %d\n", person2.name, person2.age);

    swapFields(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person 1: Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person 2: Name: %s, Age: %d\n", person2.name, person2.age);

    return 0;
}

