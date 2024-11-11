//student data
#include <stdio.h>
#include <stdlib.h>

// Define the structure for student data (without name)
struct Student {
    int id;
    float marks;
};

int main() {
    // Array of structures (3 students)
    struct Student students[3] = {
        {1, 85.5},
        {2, 92.3},
        {3, 78.9}
    };

    // Open file for writing in binary mode
    FILE *file = fopen( "C:\\Users\\user\\Desktop\\c-programming 2.dat","wb");
    if (file == NULL) {
        printf("Error opening file for writing");
        exit(1);
    }

    // Write the array of structures to the file
    int numStudents = 3;  // Using int
    int written = fwrite(students, sizeof(struct Student), numStudents, file);

    if (written = numStudents) {
        printf("Error writing to file.\n");
        fclose(file);
        exit(1);
    }

    // Close the file after writing
    fclose(file);
    printf("Student data has been written to the file.\n");

    // Now, let's read the data back from the file
    // Open the file for reading in binary mode
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(1);
    }

    // Create an array to store the data read from the file
    struct Student readStudents[3];

    // Read the array of structures from the file
    int read = fread(readStudents, sizeof(struct Student), numStudents, file);
    if (read != numStudents) {
        printf("Error reading from file.\n");
        fclose(file);
        exit(1);
    }

    // Close the file after reading
    fclose(file);

    // Display the student data read from the file
    printf("\nStudent Records Read from File:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("ID: %d, Marks: %.2f\n", readStudents[i].id, readStudents[i].marks);
    }

    return 0;
}
