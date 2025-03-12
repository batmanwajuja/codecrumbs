//assignment 2 ene212-0071/2023 joshua mativo
#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
//this code uses parallel arrays instead of structs or unions , which in my opinion is better tbh

//student data
char reg_no[MAX_STUDENTS][20];  // Registration numbers
char names[MAX_STUDENTS][50];  // Student names
float gpas[MAX_STUDENTS];      // GPA scores

int student_count = 0;  // Track the number of students added

// Function to add a student to the graduation list
void addStudent(const char* reg, const char* name, float gpa) {//const makes the variables immutable
    if (student_count >= MAX_STUDENTS) {
        printf("Error: Cannot add more students. Maximum capacity reached.\n");
        return;
    }
    strcpy(reg_no[student_count], reg);
    strcpy(names[student_count], name);
    gpas[student_count] = gpa;
    student_count++;
}

// Function to display students and their graduation class
void displayGraduationList() {
    printf("\nGraduation List:\n");
    printf("Reg No\t\tName\t\t\tGPA\t\tClass\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < student_count; i++) {
        printf("%s\t%s\t%.2f\t", reg_no[i], names[i], gpas[i]);

        // Determine graduation class based on GPA
        if (gpas[i] > 69.50) {
            printf("First Class Honors\n");
        } else if (gpas[i] >= 60.00 && gpas[i] <= 69.40) {
            printf("Second Class Upper Division\n");
        } else if (gpas[i] >= 50.50 && gpas[i] <= 59.40) {
            printf("Second Class Lower Division\n");
        } else if (gpas[i] >= 40.00 && gpas[i] <= 49.00) {
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }
}

int main() {
    // Examples with data
    addStudent("S001", "Alice Waweru", 72.30);
    addStudent("S002", "bobert njungina", 68.00);
    addStudent("S003", "Charlie Kamau", 55.50);
    addStudent("S004", "Diani Muthoi", 42.00);
    addStudent("S005", "Eve Gathoni", 39.00);  // This will be classified as a fail

  
    displayGraduationList();

    return 0;
}
