#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[100];
    int marks;
};

int main() {
    struct student *students;
    FILE *fptr;
    int n, i;

    // Prompt for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for n students
    students = (struct student *)malloc(n * sizeof(struct student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Input data for n students
    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name); // Read string with spaces

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Open the file in append mode
    fptr = fopen("students.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file\n");
        free(students);
        exit(1);
    }

    // Write the data to the file
    for (i = 0; i < n; i++) {
        fprintf(fptr, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    // Close the file and free memory
    fclose(fptr);
    free(students);

    printf("Data saved to students.txt successfully.\n");
    return 0;
}
