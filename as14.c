#include <stdio.h>

int main() {
    char gender;

    // Input from the user
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    // Converting to uppercase
    switch (toupper(gender)) {
        case 'M':
            printf("Male\n");
            break;
        case 'F':
            printf("Female\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
