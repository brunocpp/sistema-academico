#include <stdio.h>

int main(void) {

    char name[100];
    char student_id[20];
    float grade;

    printf("Enter your name?:");
    scanf(" %[^\n]", name);

    printf("Enter your student id?:");
    scanf("%s", student_id);

    printf("Enter your grade?:");
    scanf("%f", &grade);

    printf("Welcome student!\n");
    printf("student name:%s\n", name);
    printf("student id:%s\n", student_id);
    printf("student grade:%.2f\n", grade);

    return 0;
}