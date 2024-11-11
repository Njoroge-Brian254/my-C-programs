//manage simple text file  to write paragraph
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "C:\\Users\\user\\Desktop\\c-programming 2\\output.txt"
#define MAX_LENGTH 200

// Function to write a paragraph to the file
int writeParagraph() {
    FILE *fptr = fopen(FILENAME, "a");
    if (fptr == NULL) {
        printf("Error opening file for writing\n");
        exit(1);  // Return 1 for error
    }

    char paragraph [MAX_LENGTH + 1];  // Extra space for null terminator
    printf("Enter a paragraph(up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);  // Correct use of sizeof

    fputs(paragraph, fptr);
    fputs("\n", fptr);  // New line after each sentence
    fclose(fptr);

    printf("Paragraph written to %s successfully\n", FILENAME);
    return 0;  // Return 0 for success
}

// Function to read contents from the file
int readFile() {
    FILE *fptr = fopen(FILENAME, "r");
    if (fptr == NULL) {
        printf("Error opening file for reading\n");
        exit(1);  // Return 1 for error
    }

    char buffer[MAX_LENGTH + 1];  // Extra space for null terminator
    printf("Contents of '%s':\n", FILENAME);
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);  // Print each line from the file
    }

    fclose(fptr);
    return 0;  // Return 0 for success
}

int main() {
    int choice;
    int result;  // To store the result of write/read operations
    do {
        printf("\nFile management menu:\n");
        printf("1. Write a paragraph to the file\n");
        printf("2. Read contents of the file\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Clear the newline character left by scanf

        switch (choice) {
            case 1:
                result = writeParagraph();  // Function to write sentence
                if (result != 0) {
                    printf("Failed to write to the file.\n");
                }
                break;
            case 2:
                result = readFile();  // Function to read file
                if (result != 0) {
                    printf("Failed to read the file.\n");
                }
                break;
            case 3:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);  // Exit when the user chooses option 3

    return 0;  // Indicate successful program termination
}


