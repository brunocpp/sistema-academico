#include <stdio.h>
#include "student.h"
#define MAX 50

void print_student(Student *s1) {
    printf("Welcome student!\n");
    printf("Student name: %s\n", s1->name);
    printf("Student id: %s!\n", s1->student_id);
    printf("Student grade: %.1f!\n", s1->grade);
}

int main() {

    Student students[MAX];
    int total_students = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter your name?:");
        scanf(" %[^\n]", students[total_students].name);

        printf("Enter your student id?:");
        scanf("%s", students[total_students].student_id);

        printf("Enter your grade?:");
        scanf("%f", &students[total_students].grade);

        total_students++;
    }


    for (int i = 0; i < total_students; i++) {
        print_student(&students[i]);
    }

    return 0;
}
