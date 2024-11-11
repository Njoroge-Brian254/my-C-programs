//C-program to read name and marks
#include <stdio.h>
#include <stdlib.h>  // for exit()

struct Student {
    char name[100];
    int marks;
};

int main() {
    FILE *file;
    struct Student students[5];

    // Open the file for writing
    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        exit(1);  // exit the program if file cannot be opened
    }

    // Input student details
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

      students[i].name[strcspn(students[i].name,"\n")] ="\0";

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        getchar();  // Consume the newline left by scanf
    }

    // Write student details to the file
    for (int i = 0; i < 5; i++) {
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    // Close the file
    fclose(file);

    printf("\nStudent data has been written to students.txt\n");

    return 0;
}
