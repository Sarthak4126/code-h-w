#include <stdio.h>

int main() {
    int n, i;
    int num, max;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the number of elements is valid
    if (n <= 0) {
        printf("Invalid input for the number of elements.\n");
        return 1; // Return non-zero value to indicate error
    }

    // Read the first number
    printf("Enter element 1: ");
    scanf("%d", &max);

    // Loop to read the remaining numbers and find the maximum
    for (i = 2; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &num);

        // Update max if the current number is greater
        if (num > max) {
            max = num;
        }
    }

    // Print the maximum
    printf("Maximum element is: %d\n", max);

    return 0; // Return zero to indicate successful execution
}
