#include <stdio.h>
#include "student.h"

void print_student(Student *s1) {
    printf("Welcome student!\n");
    printf("Student name: %s\n", s1->name);
    printf("Student id: %s!\n", s1->student_id);
    printf("Student grade: %.1f!\n", s1->grade);
}

int main() {
    Student s1;

    printf("Enter your name?:");
    scanf(" %[^\n]", s1.name);

    printf("Enter your student id?:");
    scanf("%s", s1.student_id);

    printf("Enter your grade?:");
    scanf("%f", &s1.grade);

    print_student(&s1);

    return 0;
}
